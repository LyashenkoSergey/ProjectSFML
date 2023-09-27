/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *textName;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *checkSortNumOfRooms;
    QCheckBox *checkSortArea;
    QCheckBox *checkSortPrice;
    QCheckBox *checkSortTime;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *filter_Area;
    QComboBox *comboBox_2;
    QLabel *filter_NumOfRooms;
    QComboBox *comboBox;
    QLabel *filter_Price;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *table;
    QListWidget *listTable;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(808, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        textName = new QLabel(centralwidget);
        textName->setObjectName("textName");
        textName->setMinimumSize(QSize(480, 30));
        QFont font;
        font.setPointSize(24);
        textName->setFont(font);
        textName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(textName);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(180, 30));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(150, 30));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(150, 30));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(150, 30));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(150, 30));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_6);

        checkSortNumOfRooms = new QCheckBox(centralwidget);
        checkSortNumOfRooms->setObjectName("checkSortNumOfRooms");
        checkSortNumOfRooms->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, checkSortNumOfRooms);

        checkSortArea = new QCheckBox(centralwidget);
        checkSortArea->setObjectName("checkSortArea");
        checkSortArea->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, checkSortArea);

        checkSortPrice = new QCheckBox(centralwidget);
        checkSortPrice->setObjectName("checkSortPrice");
        checkSortPrice->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, checkSortPrice);

        checkSortTime = new QCheckBox(centralwidget);
        checkSortTime->setObjectName("checkSortTime");
        checkSortTime->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, checkSortTime);


        gridLayout->addLayout(formLayout_2, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(60, 300, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(300, 30));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, label);

        filter_Area = new QLabel(centralwidget);
        filter_Area->setObjectName("filter_Area");
        filter_Area->setMinimumSize(QSize(150, 50));
        filter_Area->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, filter_Area);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setMinimumSize(QSize(250, 50));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_2);

        filter_NumOfRooms = new QLabel(centralwidget);
        filter_NumOfRooms->setObjectName("filter_NumOfRooms");
        filter_NumOfRooms->setMinimumSize(QSize(150, 50));

        formLayout->setWidget(2, QFormLayout::LabelRole, filter_NumOfRooms);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(250, 50));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        filter_Price = new QLabel(centralwidget);
        filter_Price->setObjectName("filter_Price");
        filter_Price->setMinimumSize(QSize(150, 50));

        formLayout->setWidget(3, QFormLayout::LabelRole, filter_Price);

        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setMinimumSize(QSize(250, 50));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_3);


        gridLayout->addLayout(formLayout, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        table = new QTableWidget(centralwidget);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        QFont font1;
        font1.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        __qtablewidgetitem->setBackground(QColor(235, 235, 235));
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        __qtablewidgetitem1->setBackground(QColor(235, 235, 235));
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(235, 235, 235));
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(235, 235, 235));
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(235, 235, 235));
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table->setObjectName("table");
        table->setMinimumSize(QSize(450, 250));
        table->setSizeIncrement(QSize(0, 0));
        table->setLineWidth(3);
        table->setMidLineWidth(1);
        table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        table->setAlternatingRowColors(false);
        table->setTextElideMode(Qt::ElideMiddle);
        table->setRowCount(0);
        table->setColumnCount(5);
        table->horizontalHeader()->setCascadingSectionResizes(true);
        table->horizontalHeader()->setDefaultSectionSize(100);
        table->horizontalHeader()->setHighlightSections(true);
        table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setCascadingSectionResizes(true);
        table->verticalHeader()->setDefaultSectionSize(25);
        table->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        table->verticalHeader()->setStretchLastSection(true);

        horizontalLayout_2->addWidget(table);

        listTable = new QListWidget(centralwidget);
        listTable->setObjectName("listTable");
        listTable->setMinimumSize(QSize(230, 250));
        listTable->setLineWidth(3);
        listTable->setMidLineWidth(1);
        listTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        listTable->setWordWrap(true);
        listTable->setItemAlignment(Qt::AlignLeading);

        horizontalLayout_2->addWidget(listTable);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 808, 37));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        listTable->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textName->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\321\201\320\272\320\260 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276 \321\200\320\260\320\271\320\276\320\275\320\260\320\274", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276 \320\272\320\276\320\273-\320\262\321\203 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\320\270", nullptr));
        checkSortNumOfRooms->setText(QString());
        checkSortArea->setText(QString());
        checkSortPrice->setText(QString());
        checkSortTime->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        filter_Area->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\271\320\276\320\275", nullptr));
        filter_NumOfRooms->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        filter_Price->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\271\320\276\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\277\321\203\320\261\320\273\320\270\320\272\320\260\321\206\320\270\320\270", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\321\201\320\272\320\260 \320\276\320\261\321\212\321\217\320\262\320\273\320\265\320\275\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
