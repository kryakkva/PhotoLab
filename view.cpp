#include "view.h"
#include "./ui_view.h"

namespace s21 {

View::View(QWidget *parent)
    : QMainWindow(parent)
    , ui_(new Ui::View) {
  ui_->setupUi(this);
  MakeGradients();
  ctrl_ = new Controller(&model_);
}

View::~View() {
  delete ui_;
  delete ctrl_;
}

void View::mousePressEvent(QMouseEvent *event) {
  if (event->button() == Qt::LeftButton) {
    if (!model_.GetOriginalImg().isNull()) {
      if (ui_->orig_frame->underMouse()) {
        ui_->orig_img_text->setText("Original image");
        ShowOriginalImg();
      }
    }
  }
}

void View::mouseReleaseEvent(QMouseEvent *event) {
  if (event->button() == Qt::LeftButton) {
    if (!model_.GetOriginalImg().isNull()) {
      if (ui_->orig_frame->underMouse()) {
        if (model_.GetOriginalImg() != model_.GetFilteredImg())
          ui_->orig_img_text->setText("Image after applying the filter");
        ui_->orig_label->setPixmap(QPixmap::fromImage(model_.GetFilteredImg().scaled(550, 450,
                                                                                     Qt::KeepAspectRatio, Qt::SmoothTransformation)));
      }
    }
  }
}

void View::on_load_img_btn_clicked() {
  QString fileName = QFileDialog::getOpenFileName(this,
                                                  tr("OpenFile"),
                                                  QDir::homePath(),
                                                  tr("Images (*.png *.jpg *.bmp)"));
  if (!fileName.isEmpty()) {
    ui_->bright_spin_box->setValue(0);
    ui_->contrast_spin_box->setValue(0);
    ctrl_->SetImage(all_img, QImage(fileName));
    ShowOriginalImg();
    ShowImg(Sender::kApplyRst);
    EnableElem();
    // QImageReader reader(fileName);
    // reader.setAllocationLimit(256);
    // reader.read(&original_);
    // filtered_ = original_;
  }
}

void View::on_save_img_btn_clicked() {
  QString file_name = QFileDialog::getSaveFileName(this,
                                                   "Save image",
                                                   QDir::homePath(),
                                                   "Images (*.bmp)");
  if (!file_name.isEmpty()) {
    ctrl_->SaveImg(file_name);
  }
}

void View::EnableElem() {
  ui_->save_img_btn->setEnabled(true);
  ui_->reset_btn->setEnabled(true);
  ui_->filters_frame->setEnabled(true);
  ui_->color_crorr_frame->setEnabled(true);
  ui_->grad_hue->setEnabled(true);
  ui_->grad_light->setEnabled(true);
  ui_->grad_satur->setEnabled(true);
  ui_->apply_brc_btn->setEnabled(false);
  ui_->apply_filters_btn->setEnabled(false);
  ui_->apply_hslv_btn->setEnabled(false);
}

void View::ShowOriginalImg() {
  ui_->orig_label->setPixmap(QPixmap::fromImage(model_.GetOriginalImg().scaled(550, 450,
                                                                 Qt::KeepAspectRatio, Qt::SmoothTransformation)));
  ui_->orig_label->setAlignment(Qt::AlignCenter);
}

void View::ShowImg(Sender who) {
  QImage img;
  switch (who) {
    case Sender::kApplyRst:
      img = model_.GetFilteredImg().scaled(550, 450,
                                           Qt::KeepAspectRatio,
                                           Qt::SmoothTransformation);
      ui_->orig_label->setPixmap(QPixmap::fromImage(img));
      // ui_->orig_label->setAlignment(Qt::AlignCenter);
      break;
    default:
      img = model_.GetTmpImg().scaled(550, 450,
                                      Qt::KeepAspectRatio,
                                      Qt::SmoothTransformation);
      break;
  }
  switch (who) {
    case Sender::kApplyRst:
      // qInfo() << "kApplyRst";
      just_set_ = true;
      ui_->bright_scroll_bar->setValue(0);
      ui_->contrast_scroll_bar->setValue(0);
      ui_->satur_scroll_bar->setValue(0);
      ui_->hue_scroll_bar->setValue(0);
      ui_->lv_scroll_bar->setValue(0);
      ui_->apply_hslv_btn->setEnabled(false);
      ui_->apply_filters_btn->setEnabled(false);
      ui_->apply_brc_btn->setEnabled(false);
      break;
    case Sender::kFilter:
      // qInfo() << "kFilter";
      just_set_ = true;
      ui_->bright_scroll_bar->setValue(0);
      ui_->contrast_scroll_bar->setValue(0);
      ui_->satur_scroll_bar->setValue(0);
      ui_->hue_scroll_bar->setValue(0);
      ui_->lv_scroll_bar->setValue(0);
      ui_->apply_filters_btn->setEnabled(true);
      ui_->apply_hslv_btn->setEnabled(false);
      ui_->apply_brc_btn->setEnabled(false);
      break;
    case Sender::kBrightContrast:
      // qInfo() << "kBrightContrast";
      ui_->satur_scroll_bar->setValue(0);
      ui_->hue_scroll_bar->setValue(0);
      ui_->lv_scroll_bar->setValue(0);
      ui_->apply_brc_btn->setEnabled(true);
      ui_->apply_filters_btn->setEnabled(false);
      ui_->apply_hslv_btn->setEnabled(false);
      break;
    case Sender::kHslv:
      // qInfo() << "kHslv";
      ui_->bright_scroll_bar->setValue(0);
      ui_->contrast_scroll_bar->setValue(0);
      ui_->apply_hslv_btn->setEnabled(true);
      ui_->apply_brc_btn->setEnabled(false);
      ui_->apply_filters_btn->setEnabled(false);
      break;
    default:break;
  }
  just_set_ = false;
  ui_->filter_label->setPixmap(QPixmap::fromImage(img));
  ui_->filter_label->setAlignment(Qt::AlignCenter);
}

void View::on_grayscl_btn_clicked() {
  ctrl_->Greyscale();
  ShowImg(Sender::kFilter);
}

void View::on_negativ_btn_clicked() {
  ctrl_->Negative();
  ShowImg(Sender::kFilter);
}

void View::on_toning_btn_clicked() {
  QColor color = QColorDialog::getColor();
  if (color.isValid()){
    ctrl_->Toning(color);
    ShowImg(Sender::kFilter);
  }
}

void View::on_bright_scroll_bar_valueChanged(int value) {
  ctrl_->SetBright(value);
  if (!just_set_){
    ctrl_->BrightContrast();
    ShowImg(Sender::kBrightContrast);
  }
  ui_->bright_spin_box->setValue(value);
}

void View::on_bright_spin_box_valueChanged(int arg1) {
    ui_->bright_scroll_bar->setValue(arg1);
}

void View::on_contrast_scroll_bar_valueChanged(int value) {
  ctrl_->SetContrast(value);
  if (!just_set_){
    ctrl_->BrightContrast();
    ShowImg(Sender::kBrightContrast);
  }
  ui_->contrast_spin_box->setValue(value);
}

void View::on_contrast_spin_box_valueChanged(int arg1) {
  ui_->contrast_scroll_bar->setValue(arg1);
}

void View::on_reset_btn_clicked() {
  ui_->orig_img_text->setText("Original image");
  ctrl_->ResetImg();
  ShowImg(Sender::kApplyRst);
}

void View::on_apply_brc_btn_clicked() {
  ui_->orig_img_text->setText("Image after applying the filter");
  ctrl_->ApplyFilter();
  ShowImg(Sender::kApplyRst);
}

void View::on_apply_filters_btn_clicked()
{
  ui_->orig_img_text->setText("Image after applying the filter");
  ctrl_->ApplyFilter();
  ShowImg(Sender::kApplyRst);
}

void View::on_apply_hslv_btn_clicked()
{
  ui_->orig_img_text->setText("Image after applying the filter");
  ctrl_->ApplyFilter();
  ShowImg(Sender::kApplyRst);
}

void View::on_hsl_radio_btn_toggled(bool checked) {
  ctrl_->HslHsv(checked);
  if (checked)
    ui_->lv_label->setText("Lightness");
  else
    ui_->lv_label->setText("Value");
  ui_->satur_scroll_bar->setValue(0);
  ui_->hue_scroll_bar->setValue(0);
  ui_->lv_scroll_bar->setValue(0);
  MakeGradients();
}

void View::MakeGradients() {
  QImage g_hue(360, 1, QImage::Format_RGB32);
  QImage g_sat(255, 1, QImage::Format_RGB32);
  QImage g_light(255, 1, QImage::Format_RGB32);
  for (int x = 0; x < 360; ++x) {
    g_hue.setPixelColor(x, 0, QColor::fromHsv(x, 255, 255));
  }
  for (int x = 0; x < 255; ++x) {
    g_sat.setPixelColor(x, 0, QColor::fromHsl(0, x, 128));
    if (ui_->hsl_radio_btn->isChecked())
      g_light.setPixelColor(x, 0, QColor::fromHsl(0, 0, x));
    else
      g_light.setPixelColor(x, 0, QColor::fromHsv(180, 255, x));
  }
  ui_->grad_hue->setPixmap(QPixmap::fromImage(g_hue.scaled(360, 3)));
  ui_->grad_satur->setPixmap(QPixmap::fromImage(g_sat.scaled(360, 3)));
  ui_->grad_light->setPixmap(QPixmap::fromImage(g_light.scaled(360, 3)));
}


void View::on_hue_scroll_bar_valueChanged(int value) {
  ctrl_->SetHue(value);
  if (!just_set_){
    ctrl_->HueSaturation();
    ShowImg(Sender::kHslv);
  }
  ui_->hue_spin_box->setValue(value);
}

void View::on_hue_spin_box_valueChanged(int arg1) {
  ui_->hue_scroll_bar->setValue(arg1);
}

void View::on_satur_scroll_bar_valueChanged(int value)
{
  ctrl_->SetSaturation(value);
  if (!just_set_){
    ctrl_->HueSaturation();
    ShowImg(Sender::kHslv);
  }
  ui_->satur_spin_box->setValue(value);
}

void View::on_satur_spin_box_valueChanged(int arg1)
{
  ui_->satur_scroll_bar->setValue(arg1);
}


void View::on_lv_scroll_bar_valueChanged(int value)
{
  ctrl_->SetLightValue(value);
  if (!just_set_){
    ctrl_->HueSaturation();
    ShowImg(Sender::kHslv);
  }
  ui_->lv_spin_box->setValue(value);
}


void View::on_lv_spin_box_valueChanged(int arg1)
{
  ui_->lv_scroll_bar->setValue(arg1);
}


void View::on_emboss_btn_clicked()
{
  ctrl_->Emboss();
  ShowImg(Sender::kFilter);
}


void View::on_sharpen_btn_clicked()
{
  ctrl_->Sharpen();
  ShowImg(Sender::kFilter);
}


void View::on_gauss_blur_btn_clicked()
{
  ctrl_->GaussBlur();
  ShowImg(Sender::kFilter);
}


void View::on_box_blur_btn_clicked()
{
  ctrl_->BoxBlur();
  ShowImg(Sender::kFilter);
}


void View::on_laplas_fltr_btn_clicked()
{
  ctrl_->Laplas();
  ShowImg(Sender::kFilter);
}


void View::on_prewitt_fltr_btn_clicked()
{
  ctrl_->Prewitt();
  ShowImg(Sender::kFilter);
}


void View::on_cstm_krnl_btn_clicked()
{
  if (custom_.exec()){
    ctrl_->Custom(custom_.GetKernel());
    ShowImg(Sender::kFilter);
  }
}

} // namespace s21
