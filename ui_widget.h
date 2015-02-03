/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Wed Apr 14 17:58:31 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClass
{
public:
    QPushButton *Create;
    QSpinBox *ObjectSpacing;
    QLabel *label;
    QSpinBox *CitySizeX;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *CitySizeZ;
    QSpinBox *XCoord;
    QSpinBox *ZCoord;
    QLabel *label_6;
    QSpinBox *BuildingSize;

    void setupUi(QWidget *WidgetClass)
    {
        if (WidgetClass->objectName().isEmpty())
            WidgetClass->setObjectName(QString::fromUtf8("WidgetClass"));
        WidgetClass->resize(381, 400);
        Create = new QPushButton(WidgetClass);
        Create->setObjectName(QString::fromUtf8("Create"));
        Create->setGeometry(QRect(30, 120, 75, 24));
        ObjectSpacing = new QSpinBox(WidgetClass);
        ObjectSpacing->setObjectName(QString::fromUtf8("ObjectSpacing"));
        ObjectSpacing->setGeometry(QRect(120, 30, 41, 22));
        ObjectSpacing->setValue(3);
        label = new QLabel(WidgetClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 81, 16));
        CitySizeX = new QSpinBox(WidgetClass);
        CitySizeX->setObjectName(QString::fromUtf8("CitySizeX"));
        CitySizeX->setGeometry(QRect(120, 80, 61, 22));
        CitySizeX->setMaximum(10000);
        CitySizeX->setValue(100);
        label_2 = new QLabel(WidgetClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 60, 51, 16));
        textEdit = new QTextEdit(WidgetClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(23, 153, 331, 231));
        label_3 = new QLabel(WidgetClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 81, 16));
        label_4 = new QLabel(WidgetClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 60, 81, 16));
        label_5 = new QLabel(WidgetClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 60, 51, 16));
        CitySizeZ = new QSpinBox(WidgetClass);
        CitySizeZ->setObjectName(QString::fromUtf8("CitySizeZ"));
        CitySizeZ->setGeometry(QRect(200, 80, 61, 22));
        CitySizeZ->setMaximum(10000);
        CitySizeZ->setValue(100);
        XCoord = new QSpinBox(WidgetClass);
        XCoord->setObjectName(QString::fromUtf8("XCoord"));
        XCoord->setGeometry(QRect(20, 30, 81, 22));
        XCoord->setMaximum(512000);
        XCoord->setValue(2550);
        ZCoord = new QSpinBox(WidgetClass);
        ZCoord->setObjectName(QString::fromUtf8("ZCoord"));
        ZCoord->setGeometry(QRect(20, 80, 81, 22));
        ZCoord->setMaximum(512000);
        ZCoord->setValue(11750);
        label_6 = new QLabel(WidgetClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 10, 81, 16));
        BuildingSize = new QSpinBox(WidgetClass);
        BuildingSize->setObjectName(QString::fromUtf8("BuildingSize"));
        BuildingSize->setGeometry(QRect(220, 30, 41, 22));
        BuildingSize->setValue(20);

        retranslateUi(WidgetClass);

        QMetaObject::connectSlotsByName(WidgetClass);
    } // setupUi

    void retranslateUi(QWidget *WidgetClass)
    {
        WidgetClass->setWindowTitle(QApplication::translate("WidgetClass", "City Creator", 0));
        Create->setText(QApplication::translate("WidgetClass", "Create", 0));
        label->setText(QApplication::translate("WidgetClass", "Object spacing m", 0));
        label_2->setText(QApplication::translate("WidgetClass", "City Size X", 0));
        label_3->setText(QApplication::translate("WidgetClass", "Starting X coord", 0));
        label_4->setText(QApplication::translate("WidgetClass", "Starting Z coord", 0));
        label_5->setText(QApplication::translate("WidgetClass", "City Size Z", 0));
        label_6->setText(QApplication::translate("WidgetClass", "Building size m", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetClass: public Ui_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
