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


void Dialog::on_matrix_spinBox_valueChanged(int arg1)
{
    // ui->matrixWidget->setColumnCount(arg1);
    // ui->matrixWidget->setRowCount(arg1);
    // ui->matrixWidget->setColumnWidth(2, 20);
  ChangeSize(arg1, arg1);
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

} // namespace s21
