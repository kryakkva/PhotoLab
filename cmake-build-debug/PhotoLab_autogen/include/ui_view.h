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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace s21 {

class Ui_View
{
public:
    QWidget *centralwidget;
    QFrame *orig_frame;
    QLabel *orig_label;
    QFrame *filter_frame;
    QLabel *filter_label;
    QPushButton *load_img_btn;
    QPushButton *save_img_btn;
    QLabel *orig_img_text;
    QLabel *filter_img_text;
    QFrame *filters_frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *grayscl_btn;
    QPushButton *negativ_btn;
    QPushButton *toning_btn;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QPushButton *apply_filters_btn;
    QPushButton *sharpen_btn;
    QPushButton *cstm_krnl_btn;
    QPushButton *prewitt_fltr_btn;
    QPushButton *laplas_fltr_btn;
    QPushButton *emboss_btn;
    QPushButton *gauss_blur_btn;
    QPushButton *box_blur_btn;
    QFrame *color_crorr_frame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *apply_brc_btn;
    QLabel *label_3;
    QScrollBar *contrast_scroll_bar;
    QSpinBox *contrast_spin_box;
    QScrollBar *bright_scroll_bar;
    QLabel *label_4;
    QSpinBox *bright_spin_box;
    QFrame *line;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QScrollBar *hue_scroll_bar;
    QSpinBox *hue_spin_box;
    QRadioButton *hsl_radio_btn;
    QRadioButton *hsv_radio_btn;
    QLabel *label_6;
    QScrollBar *satur_scroll_bar;
    QSpinBox *satur_spin_box;
    QPushButton *apply_hslv_btn;
    QLabel *lv_label;
    QScrollBar *lv_scroll_bar;
    QSpinBox *lv_spin_box;
    QPushButton *reset_btn;
    QLabel *grad_light;
    QLabel *grad_hue;
    QLabel *grad_satur;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *s21__View)
    {
        if (s21__View->objectName().isEmpty())
            s21__View->setObjectName("s21__View");
        s21__View->resize(1200, 800);
        centralwidget = new QWidget(s21__View);
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
        load_img_btn = new QPushButton(centralwidget);
        load_img_btn->setObjectName("load_img_btn");
        load_img_btn->setEnabled(true);
        load_img_btn->setGeometry(QRect(30, 490, 555, 40));
        load_img_btn->setFocusPolicy(Qt::NoFocus);
        load_img_btn->setAutoDefault(false);
        load_img_btn->setFlat(false);
        save_img_btn = new QPushButton(centralwidget);
        save_img_btn->setObjectName("save_img_btn");
        save_img_btn->setEnabled(false);
        save_img_btn->setGeometry(QRect(615, 490, 401, 40));
        save_img_btn->setFlat(false);
        orig_img_text = new QLabel(centralwidget);
        orig_img_text->setObjectName("orig_img_text");
        orig_img_text->setGeometry(QRect(30, 8, 551, 16));
        filter_img_text = new QLabel(centralwidget);
        filter_img_text->setObjectName("filter_img_text");
        filter_img_text->setGeometry(QRect(615, 8, 551, 16));
        filters_frame = new QFrame(centralwidget);
        filters_frame->setObjectName("filters_frame");
        filters_frame->setEnabled(false);
        filters_frame->setGeometry(QRect(30, 540, 450, 190));
        filters_frame->setFrameShape(QFrame::StyledPanel);
        filters_frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(filters_frame);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        grayscl_btn = new QPushButton(filters_frame);
        grayscl_btn->setObjectName("grayscl_btn");
        grayscl_btn->setMinimumSize(QSize(0, 36));
        grayscl_btn->setBaseSize(QSize(0, 0));
        QFont font;
        font.setBold(false);
        grayscl_btn->setFont(font);
        grayscl_btn->setFocusPolicy(Qt::NoFocus);
        grayscl_btn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(grayscl_btn);

        negativ_btn = new QPushButton(filters_frame);
        negativ_btn->setObjectName("negativ_btn");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(negativ_btn->sizePolicy().hasHeightForWidth());
        negativ_btn->setSizePolicy(sizePolicy);
        negativ_btn->setMinimumSize(QSize(0, 36));
        negativ_btn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(negativ_btn);

        toning_btn = new QPushButton(filters_frame);
        toning_btn->setObjectName("toning_btn");
        sizePolicy.setHeightForWidth(toning_btn->sizePolicy().hasHeightForWidth());
        toning_btn->setSizePolicy(sizePolicy);
        toning_btn->setMinimumSize(QSize(0, 36));
        toning_btn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(toning_btn);


        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QFrame(filters_frame);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        apply_filters_btn = new QPushButton(filters_frame);
        apply_filters_btn->setObjectName("apply_filters_btn");
        apply_filters_btn->setMinimumSize(QSize(0, 36));
        apply_filters_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(apply_filters_btn, 2, 1, 1, 2);

        sharpen_btn = new QPushButton(filters_frame);
        sharpen_btn->setObjectName("sharpen_btn");
        sizePolicy.setHeightForWidth(sharpen_btn->sizePolicy().hasHeightForWidth());
        sharpen_btn->setSizePolicy(sizePolicy);
        sharpen_btn->setMinimumSize(QSize(0, 36));
        sharpen_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(sharpen_btn, 0, 1, 1, 1);

        cstm_krnl_btn = new QPushButton(filters_frame);
        cstm_krnl_btn->setObjectName("cstm_krnl_btn");
        sizePolicy.setHeightForWidth(cstm_krnl_btn->sizePolicy().hasHeightForWidth());
        cstm_krnl_btn->setSizePolicy(sizePolicy);
        cstm_krnl_btn->setMinimumSize(QSize(0, 36));
        cstm_krnl_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(cstm_krnl_btn, 2, 0, 1, 1);

        prewitt_fltr_btn = new QPushButton(filters_frame);
        prewitt_fltr_btn->setObjectName("prewitt_fltr_btn");
        sizePolicy.setHeightForWidth(prewitt_fltr_btn->sizePolicy().hasHeightForWidth());
        prewitt_fltr_btn->setSizePolicy(sizePolicy);
        prewitt_fltr_btn->setMinimumSize(QSize(0, 36));
        prewitt_fltr_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(prewitt_fltr_btn, 1, 2, 1, 1);

        laplas_fltr_btn = new QPushButton(filters_frame);
        laplas_fltr_btn->setObjectName("laplas_fltr_btn");
        sizePolicy.setHeightForWidth(laplas_fltr_btn->sizePolicy().hasHeightForWidth());
        laplas_fltr_btn->setSizePolicy(sizePolicy);
        laplas_fltr_btn->setMinimumSize(QSize(0, 36));
        laplas_fltr_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(laplas_fltr_btn, 0, 2, 1, 1);

        emboss_btn = new QPushButton(filters_frame);
        emboss_btn->setObjectName("emboss_btn");
        sizePolicy.setHeightForWidth(emboss_btn->sizePolicy().hasHeightForWidth());
        emboss_btn->setSizePolicy(sizePolicy);
        emboss_btn->setMinimumSize(QSize(0, 36));
        emboss_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(emboss_btn, 0, 0, 1, 1);

        gauss_blur_btn = new QPushButton(filters_frame);
        gauss_blur_btn->setObjectName("gauss_blur_btn");
        sizePolicy.setHeightForWidth(gauss_blur_btn->sizePolicy().hasHeightForWidth());
        gauss_blur_btn->setSizePolicy(sizePolicy);
        gauss_blur_btn->setMinimumSize(QSize(0, 36));
        gauss_blur_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(gauss_blur_btn, 1, 0, 1, 1);

        box_blur_btn = new QPushButton(filters_frame);
        box_blur_btn->setObjectName("box_blur_btn");
        sizePolicy.setHeightForWidth(box_blur_btn->sizePolicy().hasHeightForWidth());
        box_blur_btn->setSizePolicy(sizePolicy);
        box_blur_btn->setMinimumSize(QSize(0, 36));
        box_blur_btn->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(box_blur_btn, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        color_crorr_frame = new QFrame(centralwidget);
        color_crorr_frame->setObjectName("color_crorr_frame");
        color_crorr_frame->setEnabled(false);
        color_crorr_frame->setGeometry(QRect(490, 540, 681, 190));
        color_crorr_frame->setFrameShape(QFrame::StyledPanel);
        color_crorr_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(color_crorr_frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        apply_brc_btn = new QPushButton(color_crorr_frame);
        apply_brc_btn->setObjectName("apply_brc_btn");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(apply_brc_btn->sizePolicy().hasHeightForWidth());
        apply_brc_btn->setSizePolicy(sizePolicy1);
        apply_brc_btn->setMinimumSize(QSize(0, 0));
        apply_brc_btn->setMaximumSize(QSize(117, 35));
        apply_brc_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 1px solid #8f8f91;\n"
"    border-radius: 4px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_2->addWidget(apply_brc_btn, 0, 3, 2, 1);

        label_3 = new QLabel(color_crorr_frame);
        label_3->setObjectName("label_3");
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(70, 12));
        label_3->setMaximumSize(QSize(70, 12));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        contrast_scroll_bar = new QScrollBar(color_crorr_frame);
        contrast_scroll_bar->setObjectName("contrast_scroll_bar");
        sizePolicy1.setHeightForWidth(contrast_scroll_bar->sizePolicy().hasHeightForWidth());
        contrast_scroll_bar->setSizePolicy(sizePolicy1);
        contrast_scroll_bar->setMinimumSize(QSize(360, 16));
        contrast_scroll_bar->setMaximumSize(QSize(360, 16));
        contrast_scroll_bar->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"	background-color: rgb(255, 255, 255);\n"
"	height: 0 px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	background-color: rgb(150, 150, 150);\n"
"	margin: 1px 1px 1px 0px;\n"
"	min-width:14 px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:pressed {\n"
"	background-color: rgb(100, 100, 100);\n"
"}"));
        contrast_scroll_bar->setMinimum(-128);
        contrast_scroll_bar->setMaximum(128);
        contrast_scroll_bar->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(contrast_scroll_bar, 1, 1, 1, 1);

        contrast_spin_box = new QSpinBox(color_crorr_frame);
        contrast_spin_box->setObjectName("contrast_spin_box");
        sizePolicy1.setHeightForWidth(contrast_spin_box->sizePolicy().hasHeightForWidth());
        contrast_spin_box->setSizePolicy(sizePolicy1);
        contrast_spin_box->setMinimumSize(QSize(47, 20));
        contrast_spin_box->setMaximumSize(QSize(47, 20));
        contrast_spin_box->setMinimum(-128);
        contrast_spin_box->setMaximum(128);

        gridLayout_2->addWidget(contrast_spin_box, 1, 2, 1, 1);

        bright_scroll_bar = new QScrollBar(color_crorr_frame);
        bright_scroll_bar->setObjectName("bright_scroll_bar");
        sizePolicy1.setHeightForWidth(bright_scroll_bar->sizePolicy().hasHeightForWidth());
        bright_scroll_bar->setSizePolicy(sizePolicy1);
        bright_scroll_bar->setMinimumSize(QSize(360, 16));
        bright_scroll_bar->setMaximumSize(QSize(360, 14));
        bright_scroll_bar->setMouseTracking(true);
        bright_scroll_bar->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"	background-color: rgb(255, 255, 255);\n"
"	height: 0 px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	background-color: rgb(150, 150, 150);\n"
"	margin: 1px 1px 1px 0px;\n"
"	min-width:14 px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:pressed {\n"
"	background-color: rgb(100, 100, 100);\n"
"}"));
        bright_scroll_bar->setMinimum(-128);
        bright_scroll_bar->setMaximum(128);
        bright_scroll_bar->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(bright_scroll_bar, 0, 1, 1, 1);

        label_4 = new QLabel(color_crorr_frame);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(70, 12));
        label_4->setMaximumSize(QSize(16777215, 12));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        bright_spin_box = new QSpinBox(color_crorr_frame);
        bright_spin_box->setObjectName("bright_spin_box");
        sizePolicy1.setHeightForWidth(bright_spin_box->sizePolicy().hasHeightForWidth());
        bright_spin_box->setSizePolicy(sizePolicy1);
        bright_spin_box->setMinimumSize(QSize(47, 20));
        bright_spin_box->setMaximumSize(QSize(47, 20));
        bright_spin_box->setMinimum(-128);
        bright_spin_box->setMaximum(128);

        gridLayout_2->addWidget(bright_spin_box, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        line = new QFrame(color_crorr_frame);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_3 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout_3->setSpacing(-1);
#endif
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_5 = new QLabel(color_crorr_frame);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(70, 12));
        label_5->setMaximumSize(QSize(70, 12));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        hue_scroll_bar = new QScrollBar(color_crorr_frame);
        hue_scroll_bar->setObjectName("hue_scroll_bar");
        sizePolicy1.setHeightForWidth(hue_scroll_bar->sizePolicy().hasHeightForWidth());
        hue_scroll_bar->setSizePolicy(sizePolicy1);
        hue_scroll_bar->setMinimumSize(QSize(360, 16));
        hue_scroll_bar->setMaximumSize(QSize(360, 16));
        hue_scroll_bar->setAutoFillBackground(false);
        hue_scroll_bar->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	height: 0 px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	border: 1px solid;\n"
"	border-color: rgb(188, 188, 188);\n"
"	background-color: rgb(255, 255, 255);\n"
"	margin: 1px 1px 0px 0px;\n"
"	min-width:14 px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:pressed {\n"
"	border: 1px solid grey;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}"));
        hue_scroll_bar->setMinimum(-180);
        hue_scroll_bar->setMaximum(180);
        hue_scroll_bar->setValue(0);
        hue_scroll_bar->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(hue_scroll_bar, 0, 1, 1, 1);

        hue_spin_box = new QSpinBox(color_crorr_frame);
        hue_spin_box->setObjectName("hue_spin_box");
        sizePolicy1.setHeightForWidth(hue_spin_box->sizePolicy().hasHeightForWidth());
        hue_spin_box->setSizePolicy(sizePolicy1);
        hue_spin_box->setMinimumSize(QSize(47, 20));
        hue_spin_box->setMaximumSize(QSize(47, 20));
        hue_spin_box->setMinimum(-180);
        hue_spin_box->setMaximum(180);
        hue_spin_box->setSingleStep(1);

        gridLayout_3->addWidget(hue_spin_box, 0, 2, 1, 1);

        hsl_radio_btn = new QRadioButton(color_crorr_frame);
        hsl_radio_btn->setObjectName("hsl_radio_btn");
        sizePolicy1.setHeightForWidth(hsl_radio_btn->sizePolicy().hasHeightForWidth());
        hsl_radio_btn->setSizePolicy(sizePolicy1);
        hsl_radio_btn->setMinimumSize(QSize(50, 0));
        hsl_radio_btn->setMaximumSize(QSize(50, 16777215));
        hsl_radio_btn->setChecked(true);

        gridLayout_3->addWidget(hsl_radio_btn, 0, 3, 1, 1);

        hsv_radio_btn = new QRadioButton(color_crorr_frame);
        hsv_radio_btn->setObjectName("hsv_radio_btn");
        sizePolicy1.setHeightForWidth(hsv_radio_btn->sizePolicy().hasHeightForWidth());
        hsv_radio_btn->setSizePolicy(sizePolicy1);
        hsv_radio_btn->setMinimumSize(QSize(50, 0));
        hsv_radio_btn->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(hsv_radio_btn, 0, 4, 1, 1);

        label_6 = new QLabel(color_crorr_frame);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(70, 12));
        label_6->setMaximumSize(QSize(70, 12));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        satur_scroll_bar = new QScrollBar(color_crorr_frame);
        satur_scroll_bar->setObjectName("satur_scroll_bar");
        sizePolicy1.setHeightForWidth(satur_scroll_bar->sizePolicy().hasHeightForWidth());
        satur_scroll_bar->setSizePolicy(sizePolicy1);
        satur_scroll_bar->setMinimumSize(QSize(360, 16));
        satur_scroll_bar->setMaximumSize(QSize(360, 16));
        satur_scroll_bar->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	height: 0 px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	border: 1px solid;\n"
"	border-color: rgb(188, 188, 188);\n"
"	background-color: rgb(255, 255, 255);\n"
"	margin: 1px 1px 0px 0px;\n"
"	min-width:14 px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:pressed {\n"
"	border: 1px solid grey;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}"));
        satur_scroll_bar->setMinimum(-128);
        satur_scroll_bar->setMaximum(128);
        satur_scroll_bar->setValue(0);
        satur_scroll_bar->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(satur_scroll_bar, 1, 1, 1, 1);

        satur_spin_box = new QSpinBox(color_crorr_frame);
        satur_spin_box->setObjectName("satur_spin_box");
        sizePolicy1.setHeightForWidth(satur_spin_box->sizePolicy().hasHeightForWidth());
        satur_spin_box->setSizePolicy(sizePolicy1);
        satur_spin_box->setMinimumSize(QSize(47, 20));
        satur_spin_box->setMaximumSize(QSize(47, 20));
        satur_spin_box->setMinimum(-128);
        satur_spin_box->setMaximum(128);

        gridLayout_3->addWidget(satur_spin_box, 1, 2, 1, 1);

        apply_hslv_btn = new QPushButton(color_crorr_frame);
        apply_hslv_btn->setObjectName("apply_hslv_btn");
        sizePolicy1.setHeightForWidth(apply_hslv_btn->sizePolicy().hasHeightForWidth());
        apply_hslv_btn->setSizePolicy(sizePolicy1);
        apply_hslv_btn->setMinimumSize(QSize(0, 0));
        apply_hslv_btn->setMaximumSize(QSize(117, 35));
        apply_hslv_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 1px solid #8f8f91;\n"
"    border-radius: 4px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout_3->addWidget(apply_hslv_btn, 1, 3, 2, 2);

        lv_label = new QLabel(color_crorr_frame);
        lv_label->setObjectName("lv_label");
        sizePolicy1.setHeightForWidth(lv_label->sizePolicy().hasHeightForWidth());
        lv_label->setSizePolicy(sizePolicy1);
        lv_label->setMinimumSize(QSize(70, 17));
        lv_label->setMaximumSize(QSize(70, 12));
        lv_label->setLineWidth(1);
        lv_label->setMidLineWidth(0);
        lv_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lv_label->setWordWrap(false);
        lv_label->setMargin(0);
        lv_label->setIndent(-1);

        gridLayout_3->addWidget(lv_label, 2, 0, 1, 1);

        lv_scroll_bar = new QScrollBar(color_crorr_frame);
        lv_scroll_bar->setObjectName("lv_scroll_bar");
        sizePolicy1.setHeightForWidth(lv_scroll_bar->sizePolicy().hasHeightForWidth());
        lv_scroll_bar->setSizePolicy(sizePolicy1);
        lv_scroll_bar->setMinimumSize(QSize(360, 16));
        lv_scroll_bar->setMaximumSize(QSize(360, 16));
        lv_scroll_bar->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	height: 0 px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	border: 1px solid;\n"
"	border-color: rgb(188, 188, 188);\n"
"	background-color: rgb(255, 255, 255);\n"
"	margin: 1px 1px 0px 0px;\n"
"	min-width:14 px;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:pressed {\n"
"	border: 1px solid grey;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}"));
        lv_scroll_bar->setMinimum(-128);
        lv_scroll_bar->setMaximum(128);
        lv_scroll_bar->setValue(0);
        lv_scroll_bar->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(lv_scroll_bar, 2, 1, 1, 1);

        lv_spin_box = new QSpinBox(color_crorr_frame);
        lv_spin_box->setObjectName("lv_spin_box");
        sizePolicy1.setHeightForWidth(lv_spin_box->sizePolicy().hasHeightForWidth());
        lv_spin_box->setSizePolicy(sizePolicy1);
        lv_spin_box->setMinimumSize(QSize(47, 20));
        lv_spin_box->setMaximumSize(QSize(47, 20));
        lv_spin_box->setMinimum(-128);
        lv_spin_box->setMaximum(128);

        gridLayout_3->addWidget(lv_spin_box, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        reset_btn = new QPushButton(centralwidget);
        reset_btn->setObjectName("reset_btn");
        reset_btn->setEnabled(false);
        reset_btn->setGeometry(QRect(1030, 490, 141, 40));
        reset_btn->setFlat(false);
        grad_light = new QLabel(centralwidget);
        grad_light->setObjectName("grad_light");
        grad_light->setEnabled(false);
        grad_light->setGeometry(QRect(596, 695, 360, 16));
        grad_hue = new QLabel(centralwidget);
        grad_hue->setObjectName("grad_hue");
        grad_hue->setEnabled(false);
        grad_hue->setGeometry(QRect(596, 635, 360, 16));
        grad_hue->setStyleSheet(QString::fromUtf8(""));
        grad_satur = new QLabel(centralwidget);
        grad_satur->setObjectName("grad_satur");
        grad_satur->setEnabled(false);
        grad_satur->setGeometry(QRect(596, 665, 360, 16));
        s21__View->setCentralWidget(centralwidget);
        grad_light->raise();
        grad_satur->raise();
        grad_hue->raise();
        orig_frame->raise();
        filter_frame->raise();
        load_img_btn->raise();
        save_img_btn->raise();
        orig_img_text->raise();
        filter_img_text->raise();
        filters_frame->raise();
        color_crorr_frame->raise();
        reset_btn->raise();
        menubar = new QMenuBar(s21__View);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 42));
        s21__View->setMenuBar(menubar);
        statusbar = new QStatusBar(s21__View);
        statusbar->setObjectName("statusbar");
        s21__View->setStatusBar(statusbar);

        retranslateUi(s21__View);

        load_img_btn->setDefault(false);


        QMetaObject::connectSlotsByName(s21__View);
    } // setupUi

    void retranslateUi(QMainWindow *s21__View)
    {
        s21__View->setWindowTitle(QCoreApplication::translate("s21::View", "View", nullptr));
#if QT_CONFIG(tooltip)
        orig_label->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        orig_label->setText(QString());
        filter_label->setText(QString());
        load_img_btn->setText(QCoreApplication::translate("s21::View", "Load image", nullptr));
        save_img_btn->setText(QCoreApplication::translate("s21::View", "Save image", nullptr));
        orig_img_text->setText(QCoreApplication::translate("s21::View", "Original image", nullptr));
        filter_img_text->setText(QCoreApplication::translate("s21::View", "Filtered image", nullptr));
        grayscl_btn->setText(QCoreApplication::translate("s21::View", "Grayscale", nullptr));
        negativ_btn->setText(QCoreApplication::translate("s21::View", "Negative", nullptr));
        toning_btn->setText(QCoreApplication::translate("s21::View", "Toning", nullptr));
        apply_filters_btn->setText(QCoreApplication::translate("s21::View", "Apply filter", nullptr));
        sharpen_btn->setText(QCoreApplication::translate("s21::View", "Sharpen", nullptr));
        cstm_krnl_btn->setText(QCoreApplication::translate("s21::View", " Custom kernel", nullptr));
        prewitt_fltr_btn->setText(QCoreApplication::translate("s21::View", "Prewitt filter", nullptr));
        laplas_fltr_btn->setText(QCoreApplication::translate("s21::View", "Laplacian filter", nullptr));
        emboss_btn->setText(QCoreApplication::translate("s21::View", "Emboss", nullptr));
        gauss_blur_btn->setText(QCoreApplication::translate("s21::View", "Gaussian blur", nullptr));
        box_blur_btn->setText(QCoreApplication::translate("s21::View", "Box blur", nullptr));
        apply_brc_btn->setText(QCoreApplication::translate("s21::View", "Apply", nullptr));
        label_3->setText(QCoreApplication::translate("s21::View", "Brightness", nullptr));
        label_4->setText(QCoreApplication::translate("s21::View", "Contrast", nullptr));
        label_5->setText(QCoreApplication::translate("s21::View", "Hue", nullptr));
        hsl_radio_btn->setText(QCoreApplication::translate("s21::View", "HSL", nullptr));
        hsv_radio_btn->setText(QCoreApplication::translate("s21::View", "HSV", nullptr));
        label_6->setText(QCoreApplication::translate("s21::View", "Saturation", nullptr));
        apply_hslv_btn->setText(QCoreApplication::translate("s21::View", "Apply", nullptr));
        lv_label->setText(QCoreApplication::translate("s21::View", "Lightness", nullptr));
        reset_btn->setText(QCoreApplication::translate("s21::View", "Reset filters", nullptr));
        grad_light->setText(QString());
        grad_hue->setText(QString());
        grad_satur->setText(QString());
    } // retranslateUi

};

} // namespace s21

namespace s21 {
namespace Ui {
    class View: public Ui_View {};
} // namespace Ui
} // namespace s21

#endif // UI_VIEW_H
