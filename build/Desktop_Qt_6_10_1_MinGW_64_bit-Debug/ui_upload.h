/********************************************************************************
** Form generated from reading UI file 'upload.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOAD_H
#define UI_UPLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Upload
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *Search_label_2;
    QLineEdit *Subject_Input;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *Sem_Select;
    QComboBox *Year_Select;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Search_label;
    QLineEdit *Email_Input;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Upload_Button;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *Exit_Button;

    void setupUi(QMainWindow *Upload)
    {
        if (Upload->objectName().isEmpty())
            Upload->setObjectName("Upload");
        Upload->resize(600, 600);
        Upload->setMinimumSize(QSize(600, 600));
        Upload->setMaximumSize(QSize(600, 600));
        Upload->setStyleSheet(QString::fromUtf8("background-color:rgb(220, 220, 220)"));
        centralwidget = new QWidget(Upload);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(9, 0, 581, 591));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(150, 60));
        pushButton->setMaximumSize(QSize(150, 60));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:BLACK;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 30pt \"Britannic\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(220, 220, 220);\n"
"	border:none;\n"
"	font: 700 20pt \"Britannic\";\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(500, 70));
        label->setMaximumSize(QSize(500, 70));
        label->setStyleSheet(QString::fromUtf8("Color:BLACK;\n"
"Font:18px;"));

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_7 = new QSpacerItem(36, 37, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        Search_label_2 = new QLabel(widget);
        Search_label_2->setObjectName("Search_label_2");
        Search_label_2->setMinimumSize(QSize(90, 30));
        Search_label_2->setStyleSheet(QString::fromUtf8("Color:BLACK;\n"
"Font:14px;"));

        horizontalLayout_4->addWidget(Search_label_2);

        Subject_Input = new QLineEdit(widget);
        Subject_Input->setObjectName("Subject_Input");
        Subject_Input->setMinimumSize(QSize(340, 30));
        Subject_Input->setMaximumSize(QSize(340, 30));
        Subject_Input->setStyleSheet(QString::fromUtf8("font:17px;\n"
"color:BLACK;"));

        horizontalLayout_4->addWidget(Subject_Input);

        horizontalSpacer_8 = new QSpacerItem(36, 37, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        Sem_Select = new QComboBox(widget);
        Sem_Select->addItem(QString());
        Sem_Select->addItem(QString());
        Sem_Select->addItem(QString());
        Sem_Select->addItem(QString());
        Sem_Select->setObjectName("Sem_Select");
        Sem_Select->setMinimumSize(QSize(73, 30));
        Sem_Select->setMaximumSize(QSize(72, 30));
        Sem_Select->setStyleSheet(QString::fromUtf8("color:BLACK;"));

        horizontalLayout_6->addWidget(Sem_Select);

        Year_Select = new QComboBox(widget);
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->addItem(QString());
        Year_Select->setObjectName("Year_Select");
        Year_Select->setMinimumSize(QSize(72, 30));
        Year_Select->setMaximumSize(QSize(72, 30));

        horizontalLayout_6->addWidget(Year_Select);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(36, 37, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        Search_label = new QLabel(widget);
        Search_label->setObjectName("Search_label");
        Search_label->setMinimumSize(QSize(90, 30));
        Search_label->setStyleSheet(QString::fromUtf8("Color:BLACK;\n"
"Font:15px;"));

        horizontalLayout_3->addWidget(Search_label);

        Email_Input = new QLineEdit(widget);
        Email_Input->setObjectName("Email_Input");
        Email_Input->setMinimumSize(QSize(340, 30));
        Email_Input->setMaximumSize(QSize(340, 30));
        Email_Input->setStyleSheet(QString::fromUtf8("font:17px;\n"
"color:BLACK;"));

        horizontalLayout_3->addWidget(Email_Input);

        horizontalSpacer_12 = new QSpacerItem(36, 37, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Upload_Button = new QPushButton(widget);
        Upload_Button->setObjectName("Upload_Button");
        Upload_Button->setMinimumSize(QSize(435, 40));
        Upload_Button->setMaximumSize(QSize(435, 40));
        Upload_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 20pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(55, 55, 55);\n"
"	border:none;\n"
"	font: 700 20pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 20pt \"Simple Jut Out\";\n"
"}"));

        horizontalLayout_2->addWidget(Upload_Button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 47, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        Exit_Button = new QPushButton(widget);
        Exit_Button->setObjectName("Exit_Button");
        Exit_Button->setMinimumSize(QSize(101, 31));
        Exit_Button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(55, 55, 55);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	color:WHITE;\n"
"	background-color:rgb(42, 42, 42);\n"
"	border:none;\n"
"	font: 700 15pt \"Simple Jut Out\";\n"
"}"));

        horizontalLayout_5->addWidget(Exit_Button);


        verticalLayout->addLayout(horizontalLayout_5);

        Upload->setCentralWidget(centralwidget);

        retranslateUi(Upload);

        QMetaObject::connectSlotsByName(Upload);
    } // setupUi

    void retranslateUi(QMainWindow *Upload)
    {
        Upload->setWindowTitle(QCoreApplication::translate("Upload", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Upload", "Upload", nullptr));
        label->setText(QCoreApplication::translate("Upload", "<html><head/><body><p><span style=\" font-weight:700;\">Enter your email: </span>To receive your graded paper and feedback</p><p><span style=\" font-weight:700;\">Upload your file: </span>Attack a <span style=\" font-weight:700;\">PDF</span> scan of your document</p></body></html>", nullptr));
        Search_label_2->setText(QCoreApplication::translate("Upload", "Enter Subject:", nullptr));
        Subject_Input->setText(QString());
        Sem_Select->setItemText(0, QCoreApplication::translate("Upload", "Semester", nullptr));
        Sem_Select->setItemText(1, QCoreApplication::translate("Upload", "Spring", nullptr));
        Sem_Select->setItemText(2, QCoreApplication::translate("Upload", "Fall", nullptr));
        Sem_Select->setItemText(3, QCoreApplication::translate("Upload", "Summer", nullptr));

        Year_Select->setItemText(0, QCoreApplication::translate("Upload", "Year", nullptr));
        Year_Select->setItemText(1, QCoreApplication::translate("Upload", "2026", nullptr));
        Year_Select->setItemText(2, QCoreApplication::translate("Upload", "2025", nullptr));
        Year_Select->setItemText(3, QCoreApplication::translate("Upload", "2024", nullptr));
        Year_Select->setItemText(4, QCoreApplication::translate("Upload", "2023", nullptr));
        Year_Select->setItemText(5, QCoreApplication::translate("Upload", "2022", nullptr));
        Year_Select->setItemText(6, QCoreApplication::translate("Upload", "2021", nullptr));
        Year_Select->setItemText(7, QCoreApplication::translate("Upload", "2020", nullptr));
        Year_Select->setItemText(8, QCoreApplication::translate("Upload", "2019", nullptr));
        Year_Select->setItemText(9, QCoreApplication::translate("Upload", "2018", nullptr));

        Search_label->setText(QCoreApplication::translate("Upload", "Enter Email:", nullptr));
        Email_Input->setText(QString());
        Upload_Button->setText(QCoreApplication::translate("Upload", "Upload Ur Paper", nullptr));
        Exit_Button->setText(QCoreApplication::translate("Upload", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Upload: public Ui_Upload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOAD_H
