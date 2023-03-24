//
// Created by Yarik on 17.03.2023.
//

#include "Controller.h"

namespace s21 {

Controller::Controller(Filter *model) : model_(model) { }
Controller::~Controller() {}

void Controller::SetImage(imgType type, const QImage &img) {
  switch (type) {
    case all_img:
      model_->SetOriginalImg(img);
      model_->SetFilteredImg(img);
      model_->SetTmpImg(img);
      break;
    case original_img:
      model_->SetOriginalImg(img);
      break;
    case filter_img:
      model_->SetFilteredImg(img);
      break;
    case tmp_img:
      model_->SetTmpImg(img);
      break;
    default:break;
  }
}

void Controller::ResetImg() { model_->ResetImg(); }
void Controller::Greyscale() { model_->GrayScale(); }
void Controller::Negative() { model_->Negative(); }
void Controller::Toning(QColor color) { model_->Toning(color); }
void Controller::SaveImg(QString file_name) { model_->SaveImg(file_name); }
void Controller::ApplyFilter() { model_->ApplyFilter(); }
void Controller::BrightContrast() { model_->BrightContrast(); }
void Controller::HueSaturation() { model_->HueSaturation(); }
void Controller::SetContrast(int contrast) { model_->SetContrast(contrast); }
void Controller::SetBright(int bright) { model_->SetBrightness(bright); }
void Controller::HslHsv(bool b) { model_->SetHsl(b); }
void Controller::SetHue(int i) { model_->SetHue(i); }
void Controller::SetSaturation(int i) { model_->SetSaturation(i); }
void Controller::SetLightValue(int i) { model_->SetLightValue(i); }
void Controller::Emboss() { model_->Emboss(); }
void Controller::Sharpen() { model_->Sharpen(); }
void Controller::GaussBlur() { model_->GaussBlur(); }
void Controller::BoxBlur() { model_->BoxBlur(); }
void Controller::Prewitt() { model_->Prewitt(); }
void Controller::Laplas() { model_->Laplas(); }
void Controller::Custom(const std::vector<std::vector<float>> &kernel) { model_->Custom(kernel); }
} // s21