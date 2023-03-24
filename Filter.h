//
// Created by Yarik on 15.03.2023.
//

#ifndef PHOTOLAB__FILTER_H_
#define PHOTOLAB__FILTER_H_

#include <QColorDialog>
#include <QImage>
#include <vector>

namespace s21 {

enum imgType {
  original_img = 0,
  filter_img,
  tmp_img,
  all_img
};

struct HslV {
  bool hsl = true;
  float h;
  float s;
  float lv;
};

class Filter {
 public:
  Filter() = default;
  ~Filter() = default;

  void GrayScale();
  void Negative();
  void Toning(const QColor &color);
  void BrightContrast();
  void HueSaturation();
  void ResetImg();
  void SaveImg(QString file_name);
  void ApplyFilter();
  void Emboss();
  void Sharpen();
  void GaussBlur();
  void BoxBlur();
  void Prewitt();
  void Laplas();
  void Custom(const std::vector<std::vector<float>> &kernel);

  void SetOriginalImg(const QImage &original_img);
  void SetFilteredImg(const QImage &filtered_img);
  void SetTmpImg(const QImage &tmp_img);
  void SetBrightness(int brightness);
  void SetContrast(int contrast);
  void SetHsl(bool hsl);
  void SetHue(int hue);
  void SetSaturation(int saturation);
  void SetLightValue(int light_value);

  const QImage &GetOriginalImg() const;
  const QImage &GetFilteredImg() const;
  const QImage &GetTmpImg() const;

 private:
  QImage original_img_;
  QImage filtered_img_;
  QImage tmp_img_;
  HslV hsl_v_;
  std::pair<int, int> conv_;
  int brightness_ = 0;
  int contrast_ = 0;
  int hue_ = 0;
  int saturation_ = 0;
  int light_value_ = 0;
 private:
  QColor ChangeHslHsv(const QColor &color);
  QImage ResizeImg();
  void Convolution(const std::vector<std::vector<float>> &kernel, const QImage &img);
};

} // s21

#endif //PHOTOLAB__FILTER_H_
