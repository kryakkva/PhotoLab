#include "dialog.h"
#include "ui_dialog.h"

namespace s21 {

  Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
  {
    ui->setupUi(this);
    ui->matrixWidget->setRowCount(2);
    ui->matrixWidget->setColumnCount(2);
    for (auto r = 0; r < 2; ++r) {
      for (auto c = 0; c < 2; ++c) {
        QDoubleSpinBox *temp = new QDoubleSpinBox(ui->matrixWidget);
        temp->setRange(-255.f, +255.f);
        temp->setValue(+0.f);
        ui->matrixWidget->setColumnWidth(c, ui->matrixWidget->width() / 2);
        ui->matrixWidget->setCellWidget(r, c, temp);
      }
      ui->matrixWidget->setRowHeight(r, ui->matrixWidget->height() / 2);
    }
  }

  Dialog::~Dialog()
  {
    delete ui;
  }


void Dialog::ChangeSize(int col, int row) {
  // qInfo() << ui->matrixWidget->cellWidget(0, 0);
  // qInfo() << qobject_cast<QDoubleSpinBox *>(ui->matrixWidget->cellWidget(0, 0));
  // qInfo() << qobject_cast<QDoubleSpinBox *>(ui->matrixWidget->cellWidget(0, 0))->value();
  ui->matrixWidget->clear();
  // qInfo() << qobject_cast<QDoubleSpinBox *>(ui->matrixWidget->cellWidget(0, 0))->value();
  ui->matrixWidget->setRowCount(row);
  ui->matrixWidget->setColumnCount(col);

  for (auto r = 0; r < row; ++r) {
    for (auto c = 0; c < col; ++c) {
      QDoubleSpinBox *temp = new QDoubleSpinBox(ui->matrixWidget);
      temp->setRange(-255.f, +255.f);
      temp->setValue(+0.f);
      ui->matrixWidget->setColumnWidth(c, ui->matrixWidget->width() / col);
      ui->matrixWidget->setCellWidget(r, c, temp);
    }
    ui->matrixWidget->setRowHeight(r, ui->matrixWidget->height() / row);
  }
}

void Dialog::on_matrix_spinBox_w_valueChanged(int arg1)
{
  ChangeSize(arg1, ui->matrix_spinBox_h->value());
}


void Dialog::on_matrix_spinBox_h_valueChanged(int arg1)
{
  ChangeSize(ui->matrix_spinBox_w->value(), arg1);
}

const std::vector<std::vector<float>> &Dialog::GetKernel() const { return kernel; }


void Dialog::on_buttonBox_accepted()
{
  kernel.clear();
  kernel.resize(ui->matrix_spinBox_h->value());
  // qInfo() << kernel.size();
  for (int y = 0; y < ui->matrix_spinBox_h->value(); ++y) {
    for (int x = 0; x < ui->matrix_spinBox_w->value(); ++x) {
      kernel[y].push_back(qobject_cast<QDoubleSpinBox *>(ui->matrixWidget->cellWidget(y, x))->value());
    }
  }
  // for (int y = 0; y < kernel.size(); ++y) {
  //   for (int x = 0; x < kernel[y].size(); ++x) {
  //     qInfo() << kernel[y][x];
  //   }
  // }
}

} // namespace s21
