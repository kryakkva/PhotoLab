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
    const std::vector<std::vector<float>> &GetKernel() const;

  private slots:
    void on_matrix_spinBox_w_valueChanged(int arg1);
    void on_matrix_spinBox_h_valueChanged(int arg1);

    void on_buttonBox_accepted();

  private:
    Ui::Dialog *ui;
    std::vector<std::vector<float>> kernel;
    void ChangeSize(int col, int row);

  };


} // namespace s21
#endif // S21_DIALOG_H
