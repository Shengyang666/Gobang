/********************************************************************************
** Form generated from reading UI file 'gamewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWIDGET_H
#define UI_GAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameWidget
{
public:
    QPushButton *btn_return;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcd_write;
    QLabel *lb_white_position;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcd_black;
    QLabel *lb_black_position;
    QLabel *lb_timeuse;
    QLabel *lb_nodeNum;
    QLabel *lb_eval;

    void setupUi(QWidget *gameWidget)
    {
        if (gameWidget->objectName().isEmpty())
            gameWidget->setObjectName("gameWidget");
        gameWidget->resize(635, 460);
        btn_return = new QPushButton(gameWidget);
        btn_return->setObjectName("btn_return");
        btn_return->setGeometry(QRect(520, 410, 75, 23));
        layoutWidget = new QWidget(gameWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(510, 21, 91, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lcd_write = new QLCDNumber(layoutWidget);
        lcd_write->setObjectName("lcd_write");

        verticalLayout->addWidget(lcd_write);

        lb_white_position = new QLabel(layoutWidget);
        lb_white_position->setObjectName("lb_white_position");

        verticalLayout->addWidget(lb_white_position);

        layoutWidget1 = new QWidget(gameWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(510, 160, 91, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lcd_black = new QLCDNumber(layoutWidget1);
        lcd_black->setObjectName("lcd_black");

        verticalLayout_2->addWidget(lcd_black);

        lb_black_position = new QLabel(layoutWidget1);
        lb_black_position->setObjectName("lb_black_position");

        verticalLayout_2->addWidget(lb_black_position);

        lb_timeuse = new QLabel(gameWidget);
        lb_timeuse->setObjectName("lb_timeuse");
        lb_timeuse->setGeometry(QRect(460, 270, 151, 30));
        lb_nodeNum = new QLabel(gameWidget);
        lb_nodeNum->setObjectName("lb_nodeNum");
        lb_nodeNum->setGeometry(QRect(460, 300, 151, 30));
        lb_eval = new QLabel(gameWidget);
        lb_eval->setObjectName("lb_eval");
        lb_eval->setGeometry(QRect(460, 330, 151, 30));

        retranslateUi(gameWidget);

        QMetaObject::connectSlotsByName(gameWidget);
    } // setupUi

    void retranslateUi(QWidget *gameWidget)
    {
        gameWidget->setWindowTitle(QCoreApplication::translate("gameWidget", "Gobang_by_livingsu", nullptr));
        btn_return->setText(QCoreApplication::translate("gameWidget", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("gameWidget", "\347\231\275\346\243\213", nullptr));
        lb_white_position->setText(QString());
        label_2->setText(QCoreApplication::translate("gameWidget", "\351\273\221\346\243\213 ", nullptr));
        lb_black_position->setText(QString());
        lb_timeuse->setText(QCoreApplication::translate("gameWidget", "ai\350\256\241\347\256\227\350\200\227\346\227\266:", nullptr));
        lb_nodeNum->setText(QCoreApplication::translate("gameWidget", "ai\345\217\266\347\273\223\347\202\271\346\225\260:", nullptr));
        lb_eval->setText(QCoreApplication::translate("gameWidget", "ai\345\261\200\351\235\242\344\274\260\345\210\206:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameWidget: public Ui_gameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWIDGET_H
