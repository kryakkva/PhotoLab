//
// Created by Yarik on 17.03.2023.
//

#ifndef PHOTOLAB__CONTROLLER_H_
#define PHOTOLAB__CONTROLLER_H_

#include "Filter.h"


namespace s21 {

class Controller {
 public:
  Controller(Filter *model);
  ~Controller();

  void SetImage(imgType type, const QImage &img);
  void Greyscale();
  void Negative();
  void Toning(QColor color);
  void SetBright(int bright);
  void SetContrast(int contrast);
  void ResetImg();
  void SaveImg(QString file_name);
  void ApplyFilter();
  void BrightContrast();
  void HueSaturation();
  void HslHsv(bool b);
  void SetHue(int i);
  void SetSaturation(int i);
  void SetLightValue(int i);
  void Emboss();
  void Sharpen();
  void GaussBlur();
  void BoxBlur();
  void Prewitt();
  void Laplas();

 private:
  Filter *model_;

};

} // s21

#endif //PHOTOLAB__CONTROLLER_H_
