#ifndef S21_CONTROLLER_H
#define S21_CONTROLLER_H

#include <QMainWindow>
#include <QFileDialog>
#include <QColorDialog>
#include <QImageReader>
#include <QMouseEvent>

#include "Filter.h"
#include "Controller.h"
#include "dialog.h"

namespace s21 {

enum class Sender {
  kFilter = 0,
  kBrightContrast,
  kHslv,
  kApplyRst
};

namespace Ui { class View; }

class View : public QMainWindow
{
  Q_OBJECT

public:
  View(QWidget *parent = nullptr);
  ~View();
private:
  void ShowOriginalImg();
  void ShowImg(Sender who);
  void EnableElem();
  void MakeGradients();
  void mousePressEvent(QMouseEvent *event) override;
  void mouseReleaseEvent(QMouseEvent *event) override;
private slots:
  void on_load_img_btn_clicked();
  void on_grayscl_btn_clicked();
  void on_negativ_btn_clicked();
  void on_toning_btn_clicked();
  void on_bright_scroll_bar_valueChanged(int position);
  void on_bright_spin_box_valueChanged(int arg1);
  void on_contrast_scroll_bar_valueChanged(int position);
  void on_contrast_spin_box_valueChanged(int arg1);
  void on_reset_btn_clicked();
  void on_save_img_btn_clicked();
  void on_apply_brc_btn_clicked();
  void on_apply_filters_btn_clicked();
  void on_hsl_radio_btn_toggled(bool checked);
  void on_hue_scroll_bar_valueChanged(int value);
  void on_hue_spin_box_valueChanged(int arg1);
  void on_satur_scroll_bar_valueChanged(int value);
  void on_satur_spin_box_valueChanged(int arg1);
  void on_lv_scroll_bar_valueChanged(int value);
  void on_lv_spin_box_valueChanged(int arg1);
  void on_apply_hslv_btn_clicked();

  void on_emboss_btn_clicked();

  void on_sharpen_btn_clicked();

  void on_gauss_blur_btn_clicked();

  void on_box_blur_btn_clicked();

  void on_laplas_fltr_btn_clicked();

  void on_prewitt_fltr_btn_clicked();

  void on_cstm_krnl_btn_clicked();

private:
  Ui::View *ui_;
  Controller *ctrl_;
  Filter model_;
  bool just_set_ = false;
};

} // namespace s21
#endif // S21_CONTROLLER_H
