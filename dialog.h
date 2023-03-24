#ifndef S21_DIALOG_H
#define S21_DIALOG_H

#include <QDialog>

namespace s21 {

  namespace Ui {
    class Dialog;
  }

  class Dialog : public QDialog
  {
    Q_OBJECT

  public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

  private slots:
    void on_matrix_spinBox_valueChanged(int arg1);

  private:
    Ui::Dialog *ui;
    void ChangeSize(int col, int row);
  };


} // namespace s21
#endif // S21_DIALOG_H
