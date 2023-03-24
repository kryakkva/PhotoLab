/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

namespace s21 {

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *matrixWidget;
    QSpinBox *matrix_spinBox;

    void setupUi(QDialog *s21__Dialog)
    {
        if (s21__Dialog->objectName().isEmpty())
            s21__Dialog->setObjectName("s21__Dialog");
        s21__Dialog->resize(800, 600);
        buttonBox = new QDialogButtonBox(s21__Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(450, 560, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        matrixWidget = new QTableWidget(s21__Dialog);
        matrixWidget->setObjectName("matrixWidget");
        matrixWidget->setGeometry(QRect(20, 10, 761, 541));
        matrixWidget->setRowCount(0);
        matrixWidget->setColumnCount(0);
        matrixWidget->horizontalHeader()->setVisible(false);
        matrixWidget->horizontalHeader()->setMinimumSectionSize(0);
        matrixWidget->horizontalHeader()->setDefaultSectionSize(0);
        matrixWidget->verticalHeader()->setVisible(false);
        matrixWidget->verticalHeader()->setMinimumSectionSize(0);
        matrixWidget->verticalHeader()->setDefaultSectionSize(0);
        matrix_spinBox = new QSpinBox(s21__Dialog);
        matrix_spinBox->setObjectName("matrix_spinBox");
        matrix_spinBox->setGeometry(QRect(20, 570, 42, 22));
        matrix_spinBox->setMinimum(2);
        matrix_spinBox->setMaximum(16);

        retranslateUi(s21__Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, s21__Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, s21__Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(s21__Dialog);
    } // setupUi

    void retranslateUi(QDialog *s21__Dialog)
    {
        s21__Dialog->setWindowTitle(QCoreApplication::translate("s21::Dialog", "Dialog", nullptr));
    } // retranslateUi

};

} // namespace s21

namespace s21 {
namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui
} // namespace s21

#endif // UI_DIALOG_H
