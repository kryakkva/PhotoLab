/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

namespace s21 {

class Ui_Controller
{
public:
    QWidget *centralwidget;
    QFrame *orig_frame;
    QLabel *orig_label;
    QFrame *filter_frame;
    QLabel *filter_label;
    QFrame *simple_filters_frame;
    QPushButton *grayscl_btn;
    QPushButton *negativ_btn;
    QPushButton *toning_btn;
    QPushButton *load_img_btn;
    QPushButton *save_img_btn;
    QLabel *label;
    QLabel *label_2;
    QFrame *conv_filters_frame;
    QPushButton *emboss_btn;
    QPushButton *sharpen_btn;
    QPushButton *box_blur_btn;
    QPushButton *laplas_fltr_btn;
    QPushButton *gauss_blur_btn;
    QPushButton *prewitt_fltr_btn;
    QPushButton *pushButton_12;
    QFrame *color_crorr_frame;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *lv_label;
    QRadioButton *hsl_radio_btn;
    QRadioButton *hsv_radio_btn;
    QScrollBar *bright_scroll_bar;
    QScrollBar *contrast_scroll_bar;
    QScrollBar *hue_scroll_bar;
    QScrollBar *satur_scroll_bar;
    QScrollBar *lv_scroll_bar;
    QSpinBox *bright_spin_box;
    QSpinBox *contrast_spin_box;
    QSpinBox *hue_spin_box;
    QSpinBox *satur_spin_box;
    QSpinBox *lv_spin_box;
    QPushButton *apply_btn;
    QPushButton *reset_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s21__Controller)
    {
        if (s21__Controller->objectName().isEmpty())
            s21__Controller->setObjectName("s21__Controller");
        s21__Controller->resize(1200, 800);
        centralwidget = new QWidget(s21__Controller);
        centralwidget->setObjectName("centralwidget");
        orig_frame = new QFrame(centralwidget);
        orig_frame->setObjectName("orig_frame");
        orig_frame->setGeometry(QRect(30, 30, 555, 455));
        orig_frame->setFrameShape(QFrame::StyledPanel);
        orig_frame->setFrameShadow(QFrame::Raised);
        orig_label = new QLabel(orig_frame);
        orig_label->setObjectName("orig_label");
        orig_label->setGeometry(QRect(1, 1, 553, 453));
        filter_frame = new QFrame(centralwidget);
        filter_frame->setObjectName("filter_frame");
        filter_frame->setGeometry(QRect(615, 30, 555, 455));
        filter_frame->setFrameShape(QFrame::StyledPanel);
        filter_frame->setFrameShadow(QFrame::Raised);
        filter_label = new QLabel(filter_frame);
        filter_label->setObjectName("filter_label");
        filter_label->setGeometry(QRect(1, 1, 553, 453));
        simple_filters_frame = new QFrame(centralwidget);
        simple_filters_frame->setObjectName("simple_filters_frame");
        simple_filters_frame->setEnabled(false);
        simple_filters_frame->setGeometry(QRect(30, 540, 151, 181));
        simple_filters_frame->setFrameShape(QFrame::StyledPanel);
        simple_filters_frame->setFrameShadow(QFrame::Raised);
        grayscl_btn = new QPushButton(simple_filters_frame);
        grayscl_btn->setObjectName("grayscl_btn");
        grayscl_btn->setGeometry(QRect(20, 20, 100, 32));
        negativ_btn = new QPushButton(simple_filters_frame);
        negativ_btn->setObjectName("negativ_btn");
        negativ_btn->setGeometry(QRect(20, 60, 100, 32));
        toning_btn = new QPushButton(simple_filters_frame);
        toning_btn->setObjectName("toning_btn");
        toning_btn->setGeometry(QRect(20, 100, 100, 32));
        load_img_btn = new QPushButton(centralwidget);
        load_img_btn->setObjectName("load_img_btn");
        load_img_btn->setEnabled(true);
        load_img_btn->setGeometry(QRect(30, 490, 555, 40));
        save_img_btn = new QPushButton(centralwidget);
        save_img_btn->setObjectName("save_img_btn");
        save_img_btn->setEnabled(false);
        save_img_btn->setGeometry(QRect(615, 490, 401, 40));
        save_img_btn->setFlat(false);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 8, 551, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(615, 8, 551, 16));
        conv_filters_frame = new QFrame(centralwidget);
        conv_filters_frame->setObjectName("conv_filters_frame");
        conv_filters_frame->setEnabled(false);
        conv_filters_frame->setGeometry(QRect(200, 540, 271, 181));
        conv_filters_frame->setFrameShape(QFrame::StyledPanel);
        conv_filters_frame->setFrameShadow(QFrame::Raised);
        emboss_btn = new QPushButton(conv_filters_frame);
        emboss_btn->setObjectName("emboss_btn");
        emboss_btn->setGeometry(QRect(20, 20, 100, 32));
        sharpen_btn = new QPushButton(conv_filters_frame);
        sharpen_btn->setObjectName("sharpen_btn");
        sharpen_btn->setGeometry(QRect(20, 60, 100, 32));
        box_blur_btn = new QPushButton(conv_filters_frame);
        box_blur_btn->setObjectName("box_blur_btn");
        box_blur_btn->setGeometry(QRect(20, 100, 100, 32));
        laplas_fltr_btn = new QPushButton(conv_filters_frame);
        laplas_fltr_btn->setObjectName("laplas_fltr_btn");
        laplas_fltr_btn->setGeometry(QRect(140, 60, 100, 32));
        gauss_blur_btn = new QPushButton(conv_filters_frame);
        gauss_blur_btn->setObjectName("gauss_blur_btn");
        gauss_blur_btn->setGeometry(QRect(140, 20, 100, 32));
        prewitt_fltr_btn = new QPushButton(conv_filters_frame);
        prewitt_fltr_btn->setObjectName("prewitt_fltr_btn");
        prewitt_fltr_btn->setGeometry(QRect(140, 100, 100, 32));
        pushButton_12 = new QPushButton(conv_filters_frame);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(20, 140, 221, 32));
        color_crorr_frame = new QFrame(centralwidget);
        color_crorr_frame->setObjectName("color_crorr_frame");
        color_crorr_frame->setEnabled(false);
        color_crorr_frame->setGeometry(QRect(500, 540, 671, 181));
        color_crorr_frame->setFrameShape(QFrame::StyledPanel);
        color_crorr_frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(color_crorr_frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 101, 16));
        label_4 = new QLabel(color_crorr_frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 40, 101, 16));
        label_5 = new QLabel(color_crorr_frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 90, 101, 16));
        label_6 = new QLabel(color_crorr_frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 120, 101, 16));
        lv_label = new QLabel(color_crorr_frame);
        lv_label->setObjectName("lv_label");
        lv_label->setGeometry(QRect(20, 150, 101, 16));
        hsl_radio_btn = new QRadioButton(color_crorr_frame);
        hsl_radio_btn->setObjectName("hsl_radio_btn");
        hsl_radio_btn->setGeometry(QRect(18, 67, 71, 20));
        hsl_radio_btn->setChecked(true);
        hsv_radio_btn = new QRadioButton(color_crorr_frame);
        hsv_radio_btn->setObjectName("hsv_radio_btn");
        hsv_radio_btn->setGeometry(QRect(90, 67, 61, 20));
        bright_scroll_bar = new QScrollBar(color_crorr_frame);
        bright_scroll_bar->setObjectName("bright_scroll_bar");
        bright_scroll_bar->setGeometry(QRect(110, 10, 361, 16));
        bright_scroll_bar->setMinimum(-128);
        bright_scroll_bar->setMaximum(128);
        bright_scroll_bar->setOrientation(Qt::Horizontal);
        contrast_scroll_bar = new QScrollBar(color_crorr_frame);
        contrast_scroll_bar->setObjectName("contrast_scroll_bar");
        contrast_scroll_bar->setGeometry(QRect(110, 40, 361, 16));
        contrast_scroll_bar->setMinimum(-128);
        contrast_scroll_bar->setMaximum(128);
        contrast_scroll_bar->setOrientation(Qt::Horizontal);
        hue_scroll_bar = new QScrollBar(color_crorr_frame);
        hue_scroll_bar->setObjectName("hue_scroll_bar");
        hue_scroll_bar->setGeometry(QRect(110, 90, 361, 16));
        hue_scroll_bar->setMaximum(255);
        hue_scroll_bar->setOrientation(Qt::Horizontal);
        satur_scroll_bar = new QScrollBar(color_crorr_frame);
        satur_scroll_bar->setObjectName("satur_scroll_bar");
        satur_scroll_bar->setGeometry(QRect(110, 120, 361, 16));
        satur_scroll_bar->setMaximum(255);
        satur_scroll_bar->setOrientation(Qt::Horizontal);
        lv_scroll_bar = new QScrollBar(color_crorr_frame);
        lv_scroll_bar->setObjectName("lv_scroll_bar");
        lv_scroll_bar->setGeometry(QRect(110, 150, 361, 16));
        lv_scroll_bar->setMaximum(255);
        lv_scroll_bar->setOrientation(Qt::Horizontal);
        bright_spin_box = new QSpinBox(color_crorr_frame);
        bright_spin_box->setObjectName("bright_spin_box");
        bright_spin_box->setGeometry(QRect(480, 10, 42, 22));
        bright_spin_box->setMinimum(-128);
        bright_spin_box->setMaximum(128);
        contrast_spin_box = new QSpinBox(color_crorr_frame);
        contrast_spin_box->setObjectName("contrast_spin_box");
        contrast_spin_box->setGeometry(QRect(480, 40, 42, 22));
        contrast_spin_box->setMinimum(-128);
        contrast_spin_box->setMaximum(128);
        hue_spin_box = new QSpinBox(color_crorr_frame);
        hue_spin_box->setObjectName("hue_spin_box");
        hue_spin_box->setGeometry(QRect(480, 90, 42, 22));
        hue_spin_box->setMaximum(255);
        satur_spin_box = new QSpinBox(color_crorr_frame);
        satur_spin_box->setObjectName("satur_spin_box");
        satur_spin_box->setGeometry(QRect(480, 120, 42, 22));
        satur_spin_box->setMaximum(255);
        lv_spin_box = new QSpinBox(color_crorr_frame);
        lv_spin_box->setObjectName("lv_spin_box");
        lv_spin_box->setGeometry(QRect(480, 150, 42, 22));
        lv_spin_box->setMaximum(255);
        apply_btn = new QPushButton(color_crorr_frame);
        apply_btn->setObjectName("apply_btn");
        apply_btn->setGeometry(QRect(540, 10, 111, 161));
        reset_btn = new QPushButton(centralwidget);
        reset_btn->setObjectName("reset_btn");
        reset_btn->setEnabled(false);
        reset_btn->setGeometry(QRect(1030, 490, 141, 40));
        reset_btn->setFlat(false);
        s21__Controller->setCentralWidget(centralwidget);
        menubar = new QMenuBar(s21__Controller);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 42));
        s21__Controller->setMenuBar(menubar);
        statusbar = new QStatusBar(s21__Controller);
        statusbar->setObjectName("statusbar");
        s21__Controller->setStatusBar(statusbar);

        retranslateUi(s21__Controller);

        QMetaObject::connectSlotsByName(s21__Controller);
    } // setupUi

    void retranslateUi(QMainWindow *s21__Controller)
    {
        s21__Controller->setWindowTitle(QCoreApplication::translate("s21::Controller", "Controller", nullptr));
        orig_label->setText(QString());
        filter_label->setText(QString());
        grayscl_btn->setText(QCoreApplication::translate("s21::Controller", "Grayscale", nullptr));
        negativ_btn->setText(QCoreApplication::translate("s21::Controller", "Negative", nullptr));
        toning_btn->setText(QCoreApplication::translate("s21::Controller", "Toning", nullptr));
        load_img_btn->setText(QCoreApplication::translate("s21::Controller", "Load image", nullptr));
        save_img_btn->setText(QCoreApplication::translate("s21::Controller", "Save image", nullptr));
        label->setText(QCoreApplication::translate("s21::Controller", "Original image", nullptr));
        label_2->setText(QCoreApplication::translate("s21::Controller", "Filtered image", nullptr));
        emboss_btn->setText(QCoreApplication::translate("s21::Controller", "Emboss", nullptr));
        sharpen_btn->setText(QCoreApplication::translate("s21::Controller", "Sharpen", nullptr));
        box_blur_btn->setText(QCoreApplication::translate("s21::Controller", "Box blur", nullptr));
        laplas_fltr_btn->setText(QCoreApplication::translate("s21::Controller", "Laplacian filter", nullptr));
        gauss_blur_btn->setText(QCoreApplication::translate("s21::Controller", "Gaussian blur", nullptr));
        prewitt_fltr_btn->setText(QCoreApplication::translate("s21::Controller", "Prewitt filter", nullptr));
        pushButton_12->setText(QCoreApplication::translate("s21::Controller", " kernel matrix", nullptr));
        label_3->setText(QCoreApplication::translate("s21::Controller", "Brightness", nullptr));
        label_4->setText(QCoreApplication::translate("s21::Controller", "Contrast", nullptr));
        label_5->setText(QCoreApplication::translate("s21::Controller", "Hue", nullptr));
        label_6->setText(QCoreApplication::translate("s21::Controller", "Saturation", nullptr));
        lv_label->setText(QCoreApplication::translate("s21::Controller", "Level", nullptr));
        hsl_radio_btn->setText(QCoreApplication::translate("s21::Controller", "HSL", nullptr));
        hsv_radio_btn->setText(QCoreApplication::translate("s21::Controller", "HSV", nullptr));
        apply_btn->setText(QCoreApplication::translate("s21::Controller", "Apply", nullptr));
        reset_btn->setText(QCoreApplication::translate("s21::Controller", "Reset filters", nullptr));
    } // retranslateUi

};

} // namespace s21

namespace s21 {
namespace Ui {
    class Controller: public Ui_Controller {};
} // namespace Ui
} // namespace s21

#endif // UI_VIEW_H
