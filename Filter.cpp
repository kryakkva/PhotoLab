//
// Created by Yarik on 15.03.2023.
//

#include "Filter.h"
#include <QDir>

namespace s21 {

static int Truncate(int i) {
  if (i < 0)
    return 0;
  else if (i > 255)
    return 255;
  return i;
}

QImage Filter::ResizeImg() {
  QSize size(conv_.first / 2 * 2 + original_img_.width(), conv_.second / 2 * 2 + original_img_.height());
  QImage ret_img(size, original_img_.format());
  QColor color;
  for (int y = 0; y < ret_img.height(); y++) {
    for (int x = 0; x < ret_img.width(); x++) {
      if ( (y < conv_.second / 2 || y >= ret_img.height() - conv_.second / 2 || x < conv_.first / 2 || x >= ret_img.width() - conv_.first / 2)) {
        if (y < conv_.second / 2) {
          if (x <= conv_.first / 2) {
            color = filtered_img_.pixelColor(0, 0);
          } else if (x >= ret_img.width() -  conv_.first / 2) {
            color = filtered_img_.pixelColor(filtered_img_.width() - 1, 0);
          } else {
            color = filtered_img_.pixelColor(x - conv_.first / 2, 0);
          }
        } else if (y >= ret_img.height() -  conv_.second / 2) {
          if (x <= conv_.first / 2) {
            color = filtered_img_.pixelColor(0, filtered_img_.height() - 1);
          } else if (x >= ret_img.width() -  conv_.first / 2) {
            color = filtered_img_.pixelColor(filtered_img_.width() - 1, filtered_img_.height() - 1);
          } else {
            color = filtered_img_.pixelColor(x - conv_.first / 2, filtered_img_.height() - 1);
          }
        } else if (x < conv_.first / 2) {
          color = filtered_img_.pixelColor(0, y - conv_.second / 2);
        } else if (x >= ret_img.width() - conv_.first / 2) {
          color = filtered_img_.pixelColor(filtered_img_.width() - 1, y - conv_.second / 2);
        }
      }/* else if (y < conv_.second / 2 || y > ret_img.height() - conv_.second / 2 || x < conv_.first / 2 || x > ret_img.width() - conv_.first / 2) {
        if (y < conv_.second / 2) {
          if (x <= conv_.first / 2) {
            color = filtered_img_.pixelColor(0, 0);
          } else if (x >= ret_img.width() -  conv_.first / 2) {
            color = filtered_img_.pixelColor(filtered_img_.width() - 1, 0);
          } else {
            color = filtered_img_.pixelColor(x - conv_.first / 2, 0);
          }
        } else if (y >= ret_img.height() -  conv_.second / 2) {
          if (x <= conv_.first / 2) {
            color = filtered_img_.pixelColor(0, filtered_img_.height() - 1);
          } else if (x > ret_img.width() -  conv_.first / 2) {
            color = filtered_img_.pixelColor(filtered_img_.width() - 1, filtered_img_.height() - 1);
          } else {
            color = filtered_img_.pixelColor(x - conv_.first / 2, filtered_img_.height() - 1);
          }
        } else if (x < conv_.first / 2) {
          color = filtered_img_.pixelColor(0, y - conv_.first / 2);
        } else if (x > ret_img.width() - conv_.first / 2) {
          color = filtered_img_.pixelColor(filtered_img_.width() - 1, y - conv_.first / 2);
        }
      }*/ else {
        color = filtered_img_.pixelColor(x - conv_.first / 2, y - conv_.second / 2);
      }
      ret_img.setPixelColor(x, y, color);
    }
  }
  ret_img.save(QDir::homePath() + "/frame.png");
  return ret_img;
}

QColor Filter::ChangeHslHsv(const QColor &color) {
  // int light = color.lightness();
  // light += light_value_;
  // if (light > 255)
  //   light = 255;
  // else if (light < 0)
  //   light = 0;
  // return QColor::fromHsl(color.hslHue(), color.hslSaturation(), light);
  // if (hsl_v_.hsl)
  //   qInfo() << "o" << color.hslHueF() << color.hslSaturationF() << color.lightnessF();
  // else
  //   qInfo() << "o" << color.hsvHueF() << color.hsvSaturationF() << color.valueF();

  float r = color.redF();
  float g = color.greenF();
  float b = color.blueF();
  float max = std::max(std::max(r, g), b);
  float min = std::min(std::min(r, g), b);
  float chroma = max - min;

  // qInfo () << r << g << b;
  // if ((r + g + b) / 3 == 1 || max == 0)
  //   hsl_v_.h = -1.f;
  // else
  if (chroma == 0.f)
    hsl_v_.h = 0;
  else {
    if (max == r)
      hsl_v_.h = 60.f * (std::fmod((g - b) / chroma, 6.f));
    else if (max == g)
      hsl_v_.h = 60.f * ((b - r) / chroma + 2.f);
    else
      hsl_v_.h = 60.f * ((r - g) / chroma + 4.f);
  }

  if (!hsl_v_.hsl){
    hsl_v_.lv = max;
    if (hsl_v_.lv == 0)
      hsl_v_.s = 0.f;
    else
      hsl_v_.s = chroma / hsl_v_.lv;
  } else {
    hsl_v_.lv = (max + min) / 2.f;
    if (hsl_v_.lv == 0.f || hsl_v_.lv == 1.f)
      hsl_v_.s = 0.f;
    else
      hsl_v_.s = (max - hsl_v_.lv) / std::min(hsl_v_.lv, 1.f - hsl_v_.lv);
  }

  hsl_v_.h += static_cast<float>(hue_);
  if (hsl_v_.h > 360.f)
    hsl_v_.h -= 360.f;
  else if (hsl_v_.h < 0.f)
    hsl_v_.h += 360.f;

  if (chroma != 0.f)
    hsl_v_.s += static_cast<float>(saturation_) / 128.f;
  if (hsl_v_.s > 1.f)
    hsl_v_.s = 1.f;
  else if (hsl_v_.s < 0.f)
    hsl_v_.s = 0.f;

  hsl_v_.lv += static_cast<float>(light_value_) / 128.f;
  if (hsl_v_.lv > 1.f)
    hsl_v_.lv = 1.f;
  else if (hsl_v_.lv < 0.f)
    hsl_v_.lv = 0.f;

  // qInfo() << "m" << hsl_v_.h / 360.f <<  hsl_v_.s << hsl_v_.lv;
  // if (hsl_v_.h == -1)
  //   r = -1;
  // else
  //   r = hsl_v_.h / 360.f;
  // return QColor::fromHslF(r, hsl_v_.s, hsl_v_.lv);
  float h = hsl_v_.h / 60.f;
  float c;
  if (!hsl_v_.hsl)
    c = hsl_v_.lv * hsl_v_.s;
  else
    c = (1.f - fabs(2.f * hsl_v_.lv - 1.f)) * hsl_v_.s;
  float x = c * (1.f - std::fabs(std::fmodf(h, 2.f) - 1.f));
  float m;
  if (!hsl_v_.hsl)
    m = hsl_v_.lv - c;
  else
    m = hsl_v_.lv - c / 2.f;
  if (h >= 0.f && h < 1.f)
    return QColor::fromRgbF(c + m, x + m,  m);
  else if (h >= 1.f && h < 2.f)
    return QColor::fromRgbF(x + m, c + m, m);
  else if (h >= 2.f && h < 3.f)
    return QColor::fromRgbF(m, c + m, x + m);
  else if (h >= 3.f && h < 4.f)
    return QColor::fromRgbF(m, x + m, c + m);
  else if (h >= 4.f && h < 5.f)
    return QColor::fromRgbF(x + m, m, c+ m);
  else if (h >= 5.f)
    return QColor::fromRgbF(c + m, m, x + m);
  return color;
  // return QColor::fromHsvF((hsl_v_.h / 360.f), hsl_v_.s, hsl_v_.lv);
}

void  Filter::ResetImg() {
  // qInfo() << "reset img";
  filtered_img_ = tmp_img_ = original_img_;
}

void Filter::SaveImg(QString file_name) {
  // qInfo() << "save img";
  filtered_img_.save(file_name);
}

void Filter::ApplyFilter() {
  // qInfo() << "apply filter";
  filtered_img_ = tmp_img_;
}

void Filter::GrayScale() {
  // qInfo() << "GrayScale";
  for (int y = 0; y < filtered_img_.height(); ++y) {
    for (int x = 0; x < filtered_img_.width(); ++x) {
      QColor color = filtered_img_.pixelColor(x,y);
      int i  = color.red() * 0.299 + color.green() * 0.587 + color.blue() * 0.114;
      tmp_img_.setPixelColor(x, y, QColor(i, i, i));
    }
  }
}

void Filter::Negative() {
  // qInfo() << "Negative";
  for (int y = 0; y < filtered_img_.height(); ++y) {
    for (int x = 0; x < filtered_img_.width(); ++x) {
      QRgb c = filtered_img_.pixel(x,y);
      tmp_img_.setPixelColor(x, y, QColor(255 - qRed(c),
                                     255 - qGreen(c), 255 - qBlue(c)));
    }
  }
}

void Filter::Toning(const QColor &color) {
  // qInfo() << "Toning";
  for (int y = 0; y < filtered_img_.height(); ++y) {
    for (int x = 0; x < filtered_img_.width(); ++x) {
      QColor cl = filtered_img_.pixelColor(x,y);
      double i  = cl.red() * 0.299 + cl.green() * 0.587 + cl.blue() * 0.114;
      tmp_img_.setPixelColor(x, y, QColor(i * color.red() / 255,
                                     i * color.green() / 255, i * color.blue() / 255));
    }
  }
}

void Filter::BrightContrast() {
  // qInfo() << "BrightContrast";
  int coeff = 0;
  int buf = 0;
  float factor = (259.f * ((float)contrast_ + 255.f)) / (255.f * (259.f - (float)contrast_));
  for (int y = 0; y < filtered_img_.height(); ++y) {
    for (int x = 0; x < filtered_img_.width(); ++x) {
      QColor color = filtered_img_.pixelColor(x, y);
      coeff += color.red() + color.green() + color.blue() + brightness_ * 3;
      buf++;
    }
  }
  buf = (coeff / (buf * 3));
  // qInfo() << buf;
  for (int y = 0; y < filtered_img_.height(); ++y) {
    for (int x = 0; x < filtered_img_.width(); ++x) {
      QColor color = filtered_img_.pixelColor(x, y);
      int r = Truncate((int)(factor * (color.red() + brightness_ - buf) + buf));
      int g = Truncate((int)(factor * (color.green() + brightness_- buf) + buf));
      int b = Truncate((int)(factor * (color.blue() + brightness_- buf) + buf));
      tmp_img_.setPixelColor(x, y, QColor(r, g, b));
    }
  }
}

void Filter::HueSaturation() {
  for (int y = 0; y < filtered_img_.height(); ++y) {
    for (int x = 0; x < filtered_img_.width(); ++x) {
      QColor color = filtered_img_.pixelColor(x, y);
      color = ChangeHslHsv(color);
      tmp_img_.setPixelColor(x, y, color);
    }
  }
}

void Filter::Convolution(const std::vector<std::vector<float>> &kernel,
                         const QImage &img) {
  float r, g, b;
  // for (int y = 0; y < img.height() - conv_.second + 1; ++y) {
  //   for (int x = 0; x < img.width() - conv_.first + 1; ++x) {
  for (int y = 0; y < original_img_.height(); ++y) {
    for (int x = 0; x < original_img_.width(); ++x) {
      r = g = b = 0;
      for (int i = 0; i < conv_.second; ++i) {
        for (int j = 0; j < conv_.first; ++j) {
          QColor color = img.pixelColor(x + j, y + i);
          r += color.redF() * kernel[i][j];
          g += color.greenF() * kernel[i][j];
          b += color.blueF() * kernel[i][j];
        }
      }
      // r = qBound(0.f, r, 1.f);
      // g = qBound(0.f, g, 1.f);
      // b = qBound(0.f, b, 1.f);
      tmp_img_.setPixelColor(x ,y, QColor::fromRgbF(r, g, b));
    }
  }
}

// void Filter::Emboss() {
//   conv_.first = 3;
//   conv_.second = 3;
//   static std::vector<std::vector<float>> kernel {{-2.f, -1.f, 0.f}, {-1.f, 1.f, 1.f}, {0.f, 1.f, 2.f}};
//   Convolution(kernel, ResizeImg());
// }

void Filter::Emboss() {
  conv_.first = 2;
  conv_.second = 2;
  static std::vector<std::vector<float>> kernel {{1.f, 0.f}, {0.f, -1.f}};
  Convolution(kernel, ResizeImg());
}

void Filter::Laplas() {
  conv_.first = 3;
  conv_.second = 3;
  static std::vector<std::vector<float>> kernel {{-1.f, -1.f, -1.f}, {-1.f, 8.f, -1.f}, {-1.f, -1.f, -1.f}};
  Convolution(kernel, ResizeImg());
}

void Filter::Sharpen() {
  conv_.first = 3;
  conv_.second = 3;
  static std::vector<std::vector<float>> kernel {{0.f, -1.f, 0.f},
                                                 {-1.f, 5.f, -1.f},
                                                 {0.f, -1.f, 0.f}};
  Convolution(kernel, ResizeImg());
}

void Filter::GaussBlur() {
  conv_.first = 3;
  conv_.second = 3;
  float a = 1/16.f;
  float b = 2/16.f;
  float c = 4/16.f;
  static std::vector<std::vector<float>> kernel {{a, b, a}, {b, c, b}, {a, b, a}};
  Convolution(kernel, ResizeImg());
}

void Filter::BoxBlur() {
  conv_.first = 3;
  conv_.second = 3;
  float a = 1/9.f;
  static std::vector<std::vector<float>> kernel {{a, a, a}, {a, a, a}, {a, a, a}};
  Convolution(kernel, ResizeImg());
}

void Filter::Prewitt() {
  conv_.first = 3;
  conv_.second = 3;
  static std::vector<std::vector<float>> kernel_h {{1.f, 0.f, -1.f},
                                                   {1.f, 0.f, -1.f},
                                                   {1.f, 0.f, -1.f}};
  static std::vector<std::vector<float>> kernel_v {{1.f, 1.f, 1.f},
                                                   {0.f, 0.f, 0.f},
                                                   {-1.f, -1.f, -1.f}};
  float rv, rh, gv, gh, bv, bh;
  QImage img = ResizeImg();
  for (int y = 0; y < original_img_.height(); ++y) {
    for (int x = 0; x < original_img_.width(); ++x) {
      rv = rh = gv = gh = bv = bh = 0;
      for (int i = 0; i < conv_.second; ++i) {
        for (int j = 0; j < conv_.first; ++j) {
          QColor color = img.pixelColor(x + j, y + i);
          rv += color.redF() * kernel_v[i][j];
          gv += color.greenF() * kernel_v[i][j];
          bv += color.blueF() * kernel_v[i][j];
          rh += color.redF() * kernel_h[i][j];
          gh += color.greenF() * kernel_h[i][j];
          bh += color.blueF() * kernel_h[i][j];
        }
      }
      rv = qBound(0.f, fabsf(rv) + fabsf(rh), 1.f);
      gv = qBound(0.f, fabsf(gv) + fabsf(gh), 1.f);
      bv = qBound(0.f, fabsf(bv) + fabsf(bh), 1.f);
      tmp_img_.setPixelColor(x ,y, QColor::fromRgbF(rv, gv, bv));
    }
  }
}

void Filter::SetOriginalImg(const QImage &original_img) {
  original_img_ = original_img;
}
void Filter::SetFilteredImg(const QImage &filtered_img) {
  filtered_img_ = filtered_img;
}
void Filter::SetTmpImg(const QImage &tmp_img) {
  tmp_img_ = tmp_img;
}
const QImage &Filter::GetOriginalImg() const {
  return original_img_;
}
const QImage &Filter::GetFilteredImg() const {
  return filtered_img_;
}
const QImage &Filter::GetTmpImg() const {
  return tmp_img_;
}
void Filter::SetBrightness(int brightness) {
  brightness_ = brightness;
}
void Filter::SetContrast(int contrast) {
  contrast_ = contrast;
}

void Filter::SetHsl(bool hsl) {
  hsl_v_.hsl = hsl;
}
void Filter::SetHue(int hue) {
  Filter::hue_ = hue;
}
void Filter::SetSaturation(int saturation) {
  Filter::saturation_ = saturation;
}
void Filter::SetLightValue(int light_value) {
  Filter::light_value_ = light_value;
}

} // s21