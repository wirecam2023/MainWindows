/********************************************************************************
** Form generated from reading UI file 'MainWindows.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWS_H
#define UI_MAINWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <dragbutton.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindowsClass
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetLeftMain;
    QVBoxLayout *verticalLayout_2;
    DragButton *addPosition;
    QToolButton *addInput;
    QToolButton *addOutput;
    QToolButton *MotorFixed;
    QToolButton *MotorRelax;
    QToolButton *Vaccum;
    QToolButton *Devacuum;
    QSpacerItem *verticalSpacer_2;
    QWidget *ProductWidget;
    QWidget *page2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widgetLeftConfig;
    QVBoxLayout *verticalLayout_3;
    QToolButton *tbtnConfig1;
    QToolButton *tbtnConfig2;
    QToolButton *tbtnConfig3;
    QToolButton *tbtnConfig4;
    QToolButton *tbtnConfig5;
    QToolButton *tbtnConfig6;
    QSpacerItem *verticalSpacer_3;
    QLabel *lab2;
    QWidget *page3;
    QVBoxLayout *verticalLayout_5;
    QWidget *MotionWidget;
    QWidget *page4;
    QVBoxLayout *verticalLayout_4;
    QWidget *MotorWidget;
    QWidget *page5;
    QWidget *DebugWidget;
    QWidget *widgetTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labIco;
    QLabel *labTitle;
    QWidget *widgetTop;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnProduct;
    QToolButton *btnConfig;
    QToolButton *btnData;
    QToolButton *btnData_2;
    QToolButton *btnHelp;
    QToolButton *btnExit;
    QSpacerItem *horizontalSpacer;
    QWidget *widgetMenu;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Close;
    QPushButton *btnMenu_Max;

    void setupUi(QWidget *MainWindowsClass)
    {
        if (MainWindowsClass->objectName().isEmpty())
            MainWindowsClass->setObjectName(QStringLiteral("MainWindowsClass"));
        MainWindowsClass->resize(1192, 752);
        stackedWidget = new QStackedWidget(MainWindowsClass);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 70, 1191, 671));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        horizontalLayout = new QHBoxLayout(page1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widgetLeftMain = new QWidget(page1);
        widgetLeftMain->setObjectName(QStringLiteral("widgetLeftMain"));
        widgetLeftMain->setMaximumSize(QSize(90, 16777215));
        verticalLayout_2 = new QVBoxLayout(widgetLeftMain);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        addPosition = new DragButton(widgetLeftMain);
        addPosition->setObjectName(QStringLiteral("addPosition"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addPosition->sizePolicy().hasHeightForWidth());
        addPosition->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(addPosition);

        addInput = new QToolButton(widgetLeftMain);
        addInput->setObjectName(QStringLiteral("addInput"));
        sizePolicy.setHeightForWidth(addInput->sizePolicy().hasHeightForWidth());
        addInput->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(addInput);

        addOutput = new QToolButton(widgetLeftMain);
        addOutput->setObjectName(QStringLiteral("addOutput"));
        sizePolicy.setHeightForWidth(addOutput->sizePolicy().hasHeightForWidth());
        addOutput->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(addOutput);

        MotorFixed = new QToolButton(widgetLeftMain);
        MotorFixed->setObjectName(QStringLiteral("MotorFixed"));
        sizePolicy.setHeightForWidth(MotorFixed->sizePolicy().hasHeightForWidth());
        MotorFixed->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(MotorFixed);

        MotorRelax = new QToolButton(widgetLeftMain);
        MotorRelax->setObjectName(QStringLiteral("MotorRelax"));
        sizePolicy.setHeightForWidth(MotorRelax->sizePolicy().hasHeightForWidth());
        MotorRelax->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(MotorRelax);

        Vaccum = new QToolButton(widgetLeftMain);
        Vaccum->setObjectName(QStringLiteral("Vaccum"));
        sizePolicy.setHeightForWidth(Vaccum->sizePolicy().hasHeightForWidth());
        Vaccum->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(Vaccum);

        Devacuum = new QToolButton(widgetLeftMain);
        Devacuum->setObjectName(QStringLiteral("Devacuum"));
        sizePolicy.setHeightForWidth(Devacuum->sizePolicy().hasHeightForWidth());
        Devacuum->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(Devacuum);

        verticalSpacer_2 = new QSpacerItem(20, 471, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(widgetLeftMain);

        ProductWidget = new QWidget(page1);
        ProductWidget->setObjectName(QStringLiteral("ProductWidget"));

        horizontalLayout->addWidget(ProductWidget);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        horizontalLayout_4 = new QHBoxLayout(page2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widgetLeftConfig = new QWidget(page2);
        widgetLeftConfig->setObjectName(QStringLiteral("widgetLeftConfig"));
        widgetLeftConfig->setMaximumSize(QSize(100, 16777215));
        verticalLayout_3 = new QVBoxLayout(widgetLeftConfig);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tbtnConfig1 = new QToolButton(widgetLeftConfig);
        tbtnConfig1->setObjectName(QStringLiteral("tbtnConfig1"));
        sizePolicy.setHeightForWidth(tbtnConfig1->sizePolicy().hasHeightForWidth());
        tbtnConfig1->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tbtnConfig1);

        tbtnConfig2 = new QToolButton(widgetLeftConfig);
        tbtnConfig2->setObjectName(QStringLiteral("tbtnConfig2"));
        sizePolicy.setHeightForWidth(tbtnConfig2->sizePolicy().hasHeightForWidth());
        tbtnConfig2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tbtnConfig2);

        tbtnConfig3 = new QToolButton(widgetLeftConfig);
        tbtnConfig3->setObjectName(QStringLiteral("tbtnConfig3"));
        sizePolicy.setHeightForWidth(tbtnConfig3->sizePolicy().hasHeightForWidth());
        tbtnConfig3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tbtnConfig3);

        tbtnConfig4 = new QToolButton(widgetLeftConfig);
        tbtnConfig4->setObjectName(QStringLiteral("tbtnConfig4"));
        sizePolicy.setHeightForWidth(tbtnConfig4->sizePolicy().hasHeightForWidth());
        tbtnConfig4->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tbtnConfig4);

        tbtnConfig5 = new QToolButton(widgetLeftConfig);
        tbtnConfig5->setObjectName(QStringLiteral("tbtnConfig5"));
        sizePolicy.setHeightForWidth(tbtnConfig5->sizePolicy().hasHeightForWidth());
        tbtnConfig5->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tbtnConfig5);

        tbtnConfig6 = new QToolButton(widgetLeftConfig);
        tbtnConfig6->setObjectName(QStringLiteral("tbtnConfig6"));
        sizePolicy.setHeightForWidth(tbtnConfig6->sizePolicy().hasHeightForWidth());
        tbtnConfig6->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tbtnConfig6);

        verticalSpacer_3 = new QSpacerItem(20, 417, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_4->addWidget(widgetLeftConfig);

        lab2 = new QLabel(page2);
        lab2->setObjectName(QStringLiteral("lab2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab2->sizePolicy().hasHeightForWidth());
        lab2->setSizePolicy(sizePolicy1);
        lab2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lab2);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        verticalLayout_5 = new QVBoxLayout(page3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        MotionWidget = new QWidget(page3);
        MotionWidget->setObjectName(QStringLiteral("MotionWidget"));

        verticalLayout_5->addWidget(MotionWidget);

        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QStringLiteral("page4"));
        verticalLayout_4 = new QVBoxLayout(page4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        MotorWidget = new QWidget(page4);
        MotorWidget->setObjectName(QStringLiteral("MotorWidget"));

        verticalLayout_4->addWidget(MotorWidget);

        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QStringLiteral("page5"));
        DebugWidget = new QWidget(page5);
        DebugWidget->setObjectName(QStringLiteral("DebugWidget"));
        DebugWidget->setGeometry(QRect(0, 0, 1173, 653));
        stackedWidget->addWidget(page5);
        widgetTitle = new QWidget(MainWindowsClass);
        widgetTitle->setObjectName(QStringLiteral("widgetTitle"));
        widgetTitle->setGeometry(QRect(0, 0, 1191, 70));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetTitle->sizePolicy().hasHeightForWidth());
        widgetTitle->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(widgetTitle);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        labIco = new QLabel(widgetTitle);
        labIco->setObjectName(QStringLiteral("labIco"));
        labIco->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labIco);

        labTitle = new QLabel(widgetTitle);
        labTitle->setObjectName(QStringLiteral("labTitle"));
        labTitle->setStyleSheet(QStringLiteral(""));
        labTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labTitle);

        widgetTop = new QWidget(widgetTitle);
        widgetTop->setObjectName(QStringLiteral("widgetTop"));
        horizontalLayout_3 = new QHBoxLayout(widgetTop);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnProduct = new QToolButton(widgetTop);
        btnProduct->setObjectName(QStringLiteral("btnProduct"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnProduct->sizePolicy().hasHeightForWidth());
        btnProduct->setSizePolicy(sizePolicy3);
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainWindows/image/main_main.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnProduct->setIcon(icon);
        btnProduct->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnProduct);

        btnConfig = new QToolButton(widgetTop);
        btnConfig->setObjectName(QStringLiteral("btnConfig"));
        sizePolicy3.setHeightForWidth(btnConfig->sizePolicy().hasHeightForWidth());
        btnConfig->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainWindows/image/main_config.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnConfig->setIcon(icon1);
        btnConfig->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnConfig);

        btnData = new QToolButton(widgetTop);
        btnData->setObjectName(QStringLiteral("btnData"));
        sizePolicy3.setHeightForWidth(btnData->sizePolicy().hasHeightForWidth());
        btnData->setSizePolicy(sizePolicy3);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainWindows/image/main_data.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnData->setIcon(icon2);
        btnData->setChecked(false);
        btnData->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnData);

        btnData_2 = new QToolButton(widgetTop);
        btnData_2->setObjectName(QStringLiteral("btnData_2"));
        sizePolicy3.setHeightForWidth(btnData_2->sizePolicy().hasHeightForWidth());
        btnData_2->setSizePolicy(sizePolicy3);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MainWindows/image/main_about.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnData_2->setIcon(icon3);
        btnData_2->setChecked(false);
        btnData_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnData_2);

        btnHelp = new QToolButton(widgetTop);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        sizePolicy3.setHeightForWidth(btnHelp->sizePolicy().hasHeightForWidth());
        btnHelp->setSizePolicy(sizePolicy3);
        btnHelp->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MainWindows/image/main_person.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHelp->setIcon(icon4);
        btnHelp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnHelp);

        btnExit = new QToolButton(widgetTop);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        sizePolicy3.setHeightForWidth(btnExit->sizePolicy().hasHeightForWidth());
        btnExit->setSizePolicy(sizePolicy3);
        btnExit->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MainWindows/image/main_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon5);
        btnExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_3->addWidget(btnExit);


        horizontalLayout_2->addWidget(widgetTop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widgetMenu = new QWidget(widgetTitle);
        widgetMenu->setObjectName(QStringLiteral("widgetMenu"));
        gridLayout_2 = new QGridLayout(widgetMenu);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 3);

        btnMenu_Min = new QPushButton(widgetMenu);
        btnMenu_Min->setObjectName(QStringLiteral("btnMenu_Min"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy4);
        btnMenu_Min->setMinimumSize(QSize(30, 30));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(btnMenu_Min, 0, 1, 1, 1);

        btnMenu_Close = new QPushButton(widgetMenu);
        btnMenu_Close->setObjectName(QStringLiteral("btnMenu_Close"));
        sizePolicy4.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy4);
        btnMenu_Close->setMinimumSize(QSize(30, 30));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(btnMenu_Close, 0, 3, 1, 1);

        btnMenu_Max = new QPushButton(widgetMenu);
        btnMenu_Max->setObjectName(QStringLiteral("btnMenu_Max"));
        sizePolicy4.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy4);
        btnMenu_Max->setMinimumSize(QSize(30, 30));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(btnMenu_Max, 0, 2, 1, 1);


        horizontalLayout_2->addWidget(widgetMenu);


        retranslateUi(MainWindowsClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowsClass);
    } // setupUi

    void retranslateUi(QWidget *MainWindowsClass)
    {
        MainWindowsClass->setWindowTitle(QApplication::translate("MainWindowsClass", "MainWindows", nullptr));
        addPosition->setText(QApplication::translate("MainWindowsClass", "\346\267\273\345\212\240\344\275\215\347\275\256", nullptr));
        addInput->setText(QApplication::translate("MainWindowsClass", "\346\267\273\345\212\240\350\276\223\345\205\245", nullptr));
        addOutput->setText(QApplication::translate("MainWindowsClass", "\346\267\273\345\212\240\350\276\223\345\207\272", nullptr));
        MotorFixed->setText(QApplication::translate("MainWindowsClass", "\351\251\254\350\276\276\347\264\247\345\233\272", nullptr));
        MotorRelax->setText(QApplication::translate("MainWindowsClass", "\351\251\254\350\276\276\346\235\276\345\274\200", nullptr));
        Vaccum->setText(QApplication::translate("MainWindowsClass", "\347\234\237\347\251\272\345\220\270\346\260\224", nullptr));
        Devacuum->setText(QApplication::translate("MainWindowsClass", "\347\234\237\347\251\272\350\247\243\351\231\244", nullptr));
        tbtnConfig1->setText(QApplication::translate("MainWindowsClass", "\345\237\272\346\234\254\350\256\276\347\275\256", nullptr));
        tbtnConfig2->setText(QApplication::translate("MainWindowsClass", "\350\275\254\345\217\221\350\256\276\347\275\256", nullptr));
        tbtnConfig3->setText(QApplication::translate("MainWindowsClass", "\347\224\250\346\210\267\350\256\276\347\275\256", nullptr));
        tbtnConfig4->setText(QApplication::translate("MainWindowsClass", "\351\230\262\345\214\272\350\256\276\347\275\256", nullptr));
        tbtnConfig5->setText(QApplication::translate("MainWindowsClass", "\350\256\276\345\244\207\350\256\276\347\275\256", nullptr));
        tbtnConfig6->setText(QApplication::translate("MainWindowsClass", "\345\205\266\344\273\226\350\256\276\347\275\256", nullptr));
        lab2->setText(QApplication::translate("MainWindowsClass", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        labIco->setText(QString());
        labTitle->setText(QString());
        btnProduct->setText(QApplication::translate("MainWindowsClass", "\347\224\237\344\272\247\347\225\214\351\235\242", nullptr));
        btnConfig->setText(QApplication::translate("MainWindowsClass", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        btnData->setText(QApplication::translate("MainWindowsClass", "\350\277\220\346\216\247\351\205\215\347\275\256", nullptr));
        btnData_2->setText(QApplication::translate("MainWindowsClass", "\351\251\254\350\276\276\351\205\215\347\275\256", nullptr));
        btnHelp->setText(QApplication::translate("MainWindowsClass", "\350\260\203\350\257\225\345\270\256\345\212\251", nullptr));
        btnExit->setText(QApplication::translate("MainWindowsClass", "\347\224\250\346\210\267\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("MainWindowsClass", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("MainWindowsClass", "\345\205\263\351\227\255", nullptr));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        btnMenu_Max->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowsClass: public Ui_MainWindowsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWS_H
