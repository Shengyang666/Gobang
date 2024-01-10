/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btn_player;
    QPushButton *btn_ai;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(635, 460);
        btn_player = new QPushButton(Widget);
        btn_player->setObjectName("btn_player");
        btn_player->setGeometry(QRect(180, 300, 75, 23));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_player->sizePolicy().hasHeightForWidth());
        btn_player->setSizePolicy(sizePolicy);
        btn_player->setIconSize(QSize(20, 20));
        btn_ai = new QPushButton(Widget);
        btn_ai->setObjectName("btn_ai");
        btn_ai->setGeometry(QRect(390, 300, 75, 23));
        sizePolicy.setHeightForWidth(btn_ai->sizePolicy().hasHeightForWidth());
        btn_ai->setSizePolicy(sizePolicy);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 150, 36, 16));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Gobang_by_livingsu", nullptr));
        btn_player->setText(QCoreApplication::translate("Widget", "\347\216\251\345\256\266\346\250\241\345\274\217", nullptr));
        btn_ai->setText(QCoreApplication::translate("Widget", "ai\346\250\241\345\274\217", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\272\224\345\255\220\346\243\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
