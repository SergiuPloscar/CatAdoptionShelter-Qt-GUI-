/********************************************************************************
** Form generated from reading UI file 'LAB_12_14.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB_12_14_H
#define UI_LAB_12_14_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LAB_12_14Class
{
public:
    QWidget *centralWidget;
    QTabWidget *MyTabWidget;
    QWidget *IntroTab;
    QLabel *label;
    QPushButton *SendToAdminTab;
    QPushButton *SendToUserTab;
    QWidget *AdminTab;
    QListWidget *AdminListWidget;
    QPushButton *RemoveButton;
    QLineEdit *NameLine;
    QLabel *label_2;
    QLineEdit *BreedLine;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *AgeBox;
    QLabel *label_5;
    QDoubleSpinBox *WeightBox;
    QLabel *label_6;
    QLineEdit *LinkLine;
    QPushButton *AddButton;
    QPushButton *UpdateButton;
    QLabel *ErrorLabel;
    QPushButton *backButton;
    QComboBox *MyComboBox;
    QWidget *UserTab;
    QListWidget *AdoptionListWidget;
    QPushButton *backButton2;
    QLabel *AdoptionLabel;
    QPushButton *AdoptButton;
    QPushButton *NextButton;
    QLineEdit *FilterBreed;
    QSpinBox *WeightFilter;
    QPushButton *AdoptButton_2;
    QPushButton *NextButton_2;
    QLabel *FilterLabel;
    QPushButton *FilterButton;
    QPushButton *CSVButton;
    QPushButton *HTMLButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LAB_12_14Class)
    {
        if (LAB_12_14Class->objectName().isEmpty())
            LAB_12_14Class->setObjectName(QStringLiteral("LAB_12_14Class"));
        LAB_12_14Class->resize(581, 507);
        centralWidget = new QWidget(LAB_12_14Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MyTabWidget = new QTabWidget(centralWidget);
        MyTabWidget->setObjectName(QStringLiteral("MyTabWidget"));
        MyTabWidget->setGeometry(QRect(-6, -31, 591, 511));
        IntroTab = new QWidget();
        IntroTab->setObjectName(QStringLiteral("IntroTab"));
        label = new QLabel(IntroTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 40, 221, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        SendToAdminTab = new QPushButton(IntroTab);
        SendToAdminTab->setObjectName(QStringLiteral("SendToAdminTab"));
        SendToAdminTab->setGeometry(QRect(60, 120, 171, 41));
        SendToAdminTab->setFont(font);
        SendToUserTab = new QPushButton(IntroTab);
        SendToUserTab->setObjectName(QStringLiteral("SendToUserTab"));
        SendToUserTab->setGeometry(QRect(350, 120, 171, 41));
        SendToUserTab->setFont(font);
        MyTabWidget->addTab(IntroTab, QString());
        AdminTab = new QWidget();
        AdminTab->setObjectName(QStringLiteral("AdminTab"));
        AdminListWidget = new QListWidget(AdminTab);
        AdminListWidget->setObjectName(QStringLiteral("AdminListWidget"));
        AdminListWidget->setGeometry(QRect(20, 40, 331, 181));
        RemoveButton = new QPushButton(AdminTab);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));
        RemoveButton->setGeometry(QRect(370, 40, 191, 41));
        QFont font1;
        font1.setPointSize(14);
        RemoveButton->setFont(font1);
        NameLine = new QLineEdit(AdminTab);
        NameLine->setObjectName(QStringLiteral("NameLine"));
        NameLine->setGeometry(QRect(100, 240, 251, 21));
        QFont font2;
        font2.setPointSize(10);
        NameLine->setFont(font2);
        label_2 = new QLabel(AdminTab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 239, 51, 21));
        label_2->setFont(font2);
        BreedLine = new QLineEdit(AdminTab);
        BreedLine->setObjectName(QStringLiteral("BreedLine"));
        BreedLine->setGeometry(QRect(100, 271, 251, 21));
        BreedLine->setFont(font2);
        label_3 = new QLabel(AdminTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 270, 51, 21));
        label_3->setFont(font2);
        label_4 = new QLabel(AdminTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 300, 51, 21));
        label_4->setFont(font2);
        AgeBox = new QSpinBox(AdminTab);
        AgeBox->setObjectName(QStringLiteral("AgeBox"));
        AgeBox->setGeometry(QRect(100, 300, 42, 22));
        AgeBox->setFont(font2);
        AgeBox->setMinimum(1);
        label_5 = new QLabel(AdminTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 330, 51, 21));
        label_5->setFont(font2);
        WeightBox = new QDoubleSpinBox(AdminTab);
        WeightBox->setObjectName(QStringLiteral("WeightBox"));
        WeightBox->setGeometry(QRect(100, 330, 62, 22));
        WeightBox->setFont(font2);
        WeightBox->setMinimum(0.01);
        label_6 = new QLabel(AdminTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 360, 51, 21));
        label_6->setFont(font2);
        LinkLine = new QLineEdit(AdminTab);
        LinkLine->setObjectName(QStringLiteral("LinkLine"));
        LinkLine->setGeometry(QRect(100, 360, 471, 21));
        LinkLine->setFont(font2);
        AddButton = new QPushButton(AdminTab);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(370, 240, 191, 41));
        AddButton->setFont(font1);
        UpdateButton = new QPushButton(AdminTab);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));
        UpdateButton->setGeometry(QRect(370, 300, 191, 41));
        UpdateButton->setFont(font1);
        ErrorLabel = new QLabel(AdminTab);
        ErrorLabel->setObjectName(QStringLiteral("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(20, 390, 551, 31));
        QFont font3;
        font3.setPointSize(8);
        ErrorLabel->setFont(font3);
        backButton = new QPushButton(AdminTab);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(20, 10, 93, 28));
        MyComboBox = new QComboBox(AdminTab);
        MyComboBox->addItem(QString());
        MyComboBox->addItem(QString());
        MyComboBox->setObjectName(QStringLiteral("MyComboBox"));
        MyComboBox->setGeometry(QRect(120, 10, 231, 21));
        MyComboBox->setFont(font2);
        MyTabWidget->addTab(AdminTab, QString());
        UserTab = new QWidget();
        UserTab->setObjectName(QStringLiteral("UserTab"));
        AdoptionListWidget = new QListWidget(UserTab);
        AdoptionListWidget->setObjectName(QStringLiteral("AdoptionListWidget"));
        AdoptionListWidget->setGeometry(QRect(10, 50, 261, 171));
        backButton2 = new QPushButton(UserTab);
        backButton2->setObjectName(QStringLiteral("backButton2"));
        backButton2->setGeometry(QRect(10, 10, 93, 28));
        AdoptionLabel = new QLabel(UserTab);
        AdoptionLabel->setObjectName(QStringLiteral("AdoptionLabel"));
        AdoptionLabel->setGeometry(QRect(280, 80, 301, 41));
        AdoptionLabel->setFont(font3);
        AdoptionLabel->setLineWidth(1);
        AdoptButton = new QPushButton(UserTab);
        AdoptButton->setObjectName(QStringLiteral("AdoptButton"));
        AdoptButton->setGeometry(QRect(290, 130, 131, 41));
        AdoptButton->setFont(font);
        NextButton = new QPushButton(UserTab);
        NextButton->setObjectName(QStringLiteral("NextButton"));
        NextButton->setGeometry(QRect(440, 130, 131, 41));
        NextButton->setFont(font);
        FilterBreed = new QLineEdit(UserTab);
        FilterBreed->setObjectName(QStringLiteral("FilterBreed"));
        FilterBreed->setGeometry(QRect(20, 310, 211, 31));
        QFont font4;
        font4.setPointSize(12);
        FilterBreed->setFont(font4);
        WeightFilter = new QSpinBox(UserTab);
        WeightFilter->setObjectName(QStringLiteral("WeightFilter"));
        WeightFilter->setGeometry(QRect(250, 310, 41, 31));
        WeightFilter->setFont(font4);
        WeightFilter->setMinimum(1);
        WeightFilter->setMaximum(99);
        AdoptButton_2 = new QPushButton(UserTab);
        AdoptButton_2->setObjectName(QStringLiteral("AdoptButton_2"));
        AdoptButton_2->setGeometry(QRect(20, 360, 131, 41));
        AdoptButton_2->setFont(font);
        NextButton_2 = new QPushButton(UserTab);
        NextButton_2->setObjectName(QStringLiteral("NextButton_2"));
        NextButton_2->setGeometry(QRect(160, 360, 131, 41));
        NextButton_2->setFont(font);
        FilterLabel = new QLabel(UserTab);
        FilterLabel->setObjectName(QStringLiteral("FilterLabel"));
        FilterLabel->setGeometry(QRect(20, 260, 301, 41));
        FilterLabel->setFont(font3);
        FilterLabel->setLineWidth(1);
        FilterButton = new QPushButton(UserTab);
        FilterButton->setObjectName(QStringLiteral("FilterButton"));
        FilterButton->setGeometry(QRect(310, 310, 93, 31));
        FilterButton->setFont(font1);
        CSVButton = new QPushButton(UserTab);
        CSVButton->setObjectName(QStringLiteral("CSVButton"));
        CSVButton->setGeometry(QRect(370, 410, 93, 28));
        HTMLButton = new QPushButton(UserTab);
        HTMLButton->setObjectName(QStringLiteral("HTMLButton"));
        HTMLButton->setGeometry(QRect(470, 410, 93, 28));
        MyTabWidget->addTab(UserTab, QString());
        LAB_12_14Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LAB_12_14Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 581, 26));
        LAB_12_14Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LAB_12_14Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LAB_12_14Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LAB_12_14Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LAB_12_14Class->setStatusBar(statusBar);

        retranslateUi(LAB_12_14Class);

        MyTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LAB_12_14Class);
    } // setupUi

    void retranslateUi(QMainWindow *LAB_12_14Class)
    {
        LAB_12_14Class->setWindowTitle(QApplication::translate("LAB_12_14Class", "LAB_12_14", nullptr));
        label->setText(QApplication::translate("LAB_12_14Class", " What are you ?", nullptr));
        SendToAdminTab->setText(QApplication::translate("LAB_12_14Class", "ADMIN", nullptr));
        SendToUserTab->setText(QApplication::translate("LAB_12_14Class", "USER", nullptr));
        MyTabWidget->setTabText(MyTabWidget->indexOf(IntroTab), QApplication::translate("LAB_12_14Class", "Tab 1", nullptr));
        RemoveButton->setText(QApplication::translate("LAB_12_14Class", "Delete this cat", nullptr));
        label_2->setText(QApplication::translate("LAB_12_14Class", "Name", nullptr));
        label_3->setText(QApplication::translate("LAB_12_14Class", "Breed", nullptr));
        label_4->setText(QApplication::translate("LAB_12_14Class", "Age", nullptr));
        label_5->setText(QApplication::translate("LAB_12_14Class", "Weight", nullptr));
        label_6->setText(QApplication::translate("LAB_12_14Class", "Link", nullptr));
        AddButton->setText(QApplication::translate("LAB_12_14Class", "Add this cat", nullptr));
        UpdateButton->setText(QApplication::translate("LAB_12_14Class", "Update this cat", nullptr));
        ErrorLabel->setText(QString());
        backButton->setText(QApplication::translate("LAB_12_14Class", "Go back", nullptr));
        MyComboBox->setItemText(0, QApplication::translate("LAB_12_14Class", "Detailed", nullptr));
        MyComboBox->setItemText(1, QApplication::translate("LAB_12_14Class", "Short", nullptr));

        MyTabWidget->setTabText(MyTabWidget->indexOf(AdminTab), QApplication::translate("LAB_12_14Class", "Tab 2", nullptr));
        backButton2->setText(QApplication::translate("LAB_12_14Class", "Go back", nullptr));
        AdoptionLabel->setText(QString());
        AdoptButton->setText(QApplication::translate("LAB_12_14Class", "Adopt", nullptr));
        NextButton->setText(QApplication::translate("LAB_12_14Class", "Next", nullptr));
        AdoptButton_2->setText(QApplication::translate("LAB_12_14Class", "Adopt", nullptr));
        NextButton_2->setText(QApplication::translate("LAB_12_14Class", "Next", nullptr));
        FilterLabel->setText(QString());
        FilterButton->setText(QApplication::translate("LAB_12_14Class", "Filter", nullptr));
        CSVButton->setText(QApplication::translate("LAB_12_14Class", "CSV", nullptr));
        HTMLButton->setText(QApplication::translate("LAB_12_14Class", "HTML", nullptr));
        MyTabWidget->setTabText(MyTabWidget->indexOf(UserTab), QApplication::translate("LAB_12_14Class", "Tab 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LAB_12_14Class: public Ui_LAB_12_14Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB_12_14_H
