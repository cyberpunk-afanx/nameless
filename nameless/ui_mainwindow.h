/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "textedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionNew_File;
    QAction *actionSave;
    QAction *actionIDE_Shell;
    QAction *actiondcrypt_Shell;
    QAction *actionnmap_ShellCode;
    QAction *actionfuzz3r;
    QAction *actionbin_sh_by_AFANX;
    QAction *actionbin_sh_by_zbt;
    QAction *actionReverse_Shell_by_RusselWills;
    QAction *actioncat_etc_password_by_AFANX;
    QAction *actionshutdown_by_Keyman;
    QAction *actionreboot_by_zbt;
    QAction *actionadd_user_with_pass_by_0_o;
    QAction *actionNOP_TRACE_DWORD;
    QAction *actionNULL_TRACE_DWORD;
    QAction *actionAbout_build;
    QAction *actionOpen_2;
    QAction *actionDecompile;
    QAction *actionShellcode2Bin;
    QAction *actionDecompile_2;
    QAction *actionOpen_File_to_Inject;
    QWidget *centralwidget;
    QGroupBox *craft_box;
    TextEdit *textEdit;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *size;
    QGroupBox *groupBox_6;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *byte_2;
    QPushButton *byte_button;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *word;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QGroupBox *groupBox_9;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *logotype;
    QLineEdit *lineEdit;
    QLabel *label_20;
    QGroupBox *groupBox_4;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuLinux_templates;
    QMenu *menuAbout;
    QMenu *menuFile;
    QMenu *menuTool;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 717);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QStringLiteral("actionNew_File"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionIDE_Shell = new QAction(MainWindow);
        actionIDE_Shell->setObjectName(QStringLiteral("actionIDE_Shell"));
        actiondcrypt_Shell = new QAction(MainWindow);
        actiondcrypt_Shell->setObjectName(QStringLiteral("actiondcrypt_Shell"));
        actionnmap_ShellCode = new QAction(MainWindow);
        actionnmap_ShellCode->setObjectName(QStringLiteral("actionnmap_ShellCode"));
        actionfuzz3r = new QAction(MainWindow);
        actionfuzz3r->setObjectName(QStringLiteral("actionfuzz3r"));
        actionbin_sh_by_AFANX = new QAction(MainWindow);
        actionbin_sh_by_AFANX->setObjectName(QStringLiteral("actionbin_sh_by_AFANX"));
        actionbin_sh_by_zbt = new QAction(MainWindow);
        actionbin_sh_by_zbt->setObjectName(QStringLiteral("actionbin_sh_by_zbt"));
        actionReverse_Shell_by_RusselWills = new QAction(MainWindow);
        actionReverse_Shell_by_RusselWills->setObjectName(QStringLiteral("actionReverse_Shell_by_RusselWills"));
        actioncat_etc_password_by_AFANX = new QAction(MainWindow);
        actioncat_etc_password_by_AFANX->setObjectName(QStringLiteral("actioncat_etc_password_by_AFANX"));
        actionshutdown_by_Keyman = new QAction(MainWindow);
        actionshutdown_by_Keyman->setObjectName(QStringLiteral("actionshutdown_by_Keyman"));
        actionreboot_by_zbt = new QAction(MainWindow);
        actionreboot_by_zbt->setObjectName(QStringLiteral("actionreboot_by_zbt"));
        actionadd_user_with_pass_by_0_o = new QAction(MainWindow);
        actionadd_user_with_pass_by_0_o->setObjectName(QStringLiteral("actionadd_user_with_pass_by_0_o"));
        actionNOP_TRACE_DWORD = new QAction(MainWindow);
        actionNOP_TRACE_DWORD->setObjectName(QStringLiteral("actionNOP_TRACE_DWORD"));
        actionNULL_TRACE_DWORD = new QAction(MainWindow);
        actionNULL_TRACE_DWORD->setObjectName(QStringLiteral("actionNULL_TRACE_DWORD"));
        actionAbout_build = new QAction(MainWindow);
        actionAbout_build->setObjectName(QStringLiteral("actionAbout_build"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        actionDecompile = new QAction(MainWindow);
        actionDecompile->setObjectName(QStringLiteral("actionDecompile"));
        actionShellcode2Bin = new QAction(MainWindow);
        actionShellcode2Bin->setObjectName(QStringLiteral("actionShellcode2Bin"));
        actionDecompile_2 = new QAction(MainWindow);
        actionDecompile_2->setObjectName(QStringLiteral("actionDecompile_2"));
        actionOpen_File_to_Inject = new QAction(MainWindow);
        actionOpen_File_to_Inject->setObjectName(QStringLiteral("actionOpen_File_to_Inject"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        craft_box = new QGroupBox(centralwidget);
        craft_box->setObjectName(QStringLiteral("craft_box"));
        craft_box->setGeometry(QRect(190, -15, 1001, 121));
        textEdit = new TextEdit(craft_box);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 981, 81));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(190, 90, 1001, 511));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 8, 551, 141));
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(9, 30, 532, 101));
        textEdit_2->setPlaceholderText(QStringLiteral("shellcode: \\x48\\x31\\xC0"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(570, 10, 421, 81));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 401, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_7->addWidget(lineEdit_4);

        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 50, 401, 30));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_8->addWidget(lineEdit_5);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 150, 551, 51));
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 531, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        size = new QLineEdit(layoutWidget2);
        size->setObjectName(QStringLiteral("size"));

        horizontalLayout_3->addWidget(size);

        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 190, 551, 311));
        plainTextEdit_2 = new QPlainTextEdit(groupBox_6);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(10, 30, 531, 231));
        layoutWidget_2 = new QWidget(groupBox_6);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 270, 531, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(570, 80, 421, 121));
        layoutWidget3 = new QWidget(groupBox_7);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(12, 30, 341, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        byte_2 = new QLineEdit(layoutWidget3);
        byte_2->setObjectName(QStringLiteral("byte_2"));

        horizontalLayout_4->addWidget(byte_2);

        byte_button = new QPushButton(groupBox_7);
        byte_button->setObjectName(QStringLiteral("byte_button"));
        byte_button->setGeometry(QRect(360, 30, 51, 25));
        pushButton = new QPushButton(groupBox_7);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 60, 51, 25));
        pushButton_2 = new QPushButton(groupBox_7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 90, 51, 25));
        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(580, 140, 341, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        word = new QLineEdit(layoutWidget4);
        word->setObjectName(QStringLiteral("word"));

        horizontalLayout_6->addWidget(word);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(580, 170, 341, 25));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        lineEdit_6 = new QLineEdit(layoutWidget5);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_9->addWidget(lineEdit_6);

        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(570, 190, 421, 311));
        plainTextEdit_3 = new QPlainTextEdit(groupBox_9);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(10, 30, 401, 271));
        plainTextEdit_3->setPlaceholderText(QStringLiteral("STACK"));
        layoutWidget6 = new QWidget(centralwidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget7 = new QWidget(centralwidget);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        logotype = new QLabel(centralwidget);
        logotype->setObjectName(QStringLiteral("logotype"));
        logotype->setGeometry(QRect(10, 10, 171, 231));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 350, 171, 23));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 270, 171, 61));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        label_20->setFont(font);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(6, 250, 178, 81));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 450, 181, 151));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 390, 171, 23));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 610, 1181, 61));
        MainWindow->setCentralWidget(centralwidget);
        groupBox_4->raise();
        craft_box->raise();
        groupBox->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        logotype->raise();
        lineEdit->raise();
        label_20->raise();
        label_8->raise();
        lineEdit_2->raise();
        listWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 20));
        menuLinux_templates = new QMenu(menubar);
        menuLinux_templates->setObjectName(QStringLiteral("menuLinux_templates"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTool = new QMenu(menubar);
        menuTool->setObjectName(QStringLiteral("menuTool"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTool->menuAction());
        menubar->addAction(menuLinux_templates->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuLinux_templates->addAction(actionbin_sh_by_AFANX);
        menuLinux_templates->addAction(actionbin_sh_by_zbt);
        menuLinux_templates->addAction(actionReverse_Shell_by_RusselWills);
        menuLinux_templates->addAction(actionshutdown_by_Keyman);
        menuLinux_templates->addAction(actionreboot_by_zbt);
        menuLinux_templates->addAction(actionadd_user_with_pass_by_0_o);
        menuAbout->addAction(actionAbout_build);
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionOpen_File_to_Inject);
        menuTool->addAction(actionDecompile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "nameless", 0));
#ifndef QT_NO_STATUSTIP
        MainWindow->setStatusTip(QApplication::translate("MainWindow", "nameless by AFANX", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        MainWindow->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionNew_File->setText(QApplication::translate("MainWindow", "New File", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionIDE_Shell->setText(QApplication::translate("MainWindow", "IDE Shell", 0));
        actiondcrypt_Shell->setText(QApplication::translate("MainWindow", "asm/disasm ShellCode", 0));
        actionnmap_ShellCode->setText(QApplication::translate("MainWindow", "nmap ShellCode", 0));
        actionfuzz3r->setText(QApplication::translate("MainWindow", "fuzz3r", 0));
        actionbin_sh_by_AFANX->setText(QApplication::translate("MainWindow", "bin_sh by AFANX", 0));
        actionbin_sh_by_zbt->setText(QApplication::translate("MainWindow", "bin_sh by zbt", 0));
        actionReverse_Shell_by_RusselWills->setText(QApplication::translate("MainWindow", "Reverse Shell by RusselWills", 0));
        actioncat_etc_password_by_AFANX->setText(QApplication::translate("MainWindow", "cat_etc_password by AFANX", 0));
        actionshutdown_by_Keyman->setText(QApplication::translate("MainWindow", "shutdown by Keyman", 0));
        actionreboot_by_zbt->setText(QApplication::translate("MainWindow", "reboot by zbt", 0));
        actionadd_user_with_pass_by_0_o->setText(QApplication::translate("MainWindow", "add user with pass by 0_o", 0));
        actionNOP_TRACE_DWORD->setText(QApplication::translate("MainWindow", "NOP TRACE DWORD", 0));
        actionNULL_TRACE_DWORD->setText(QApplication::translate("MainWindow", "NULL TRACE DWORD", 0));
        actionAbout_build->setText(QApplication::translate("MainWindow", "About build", 0));
        actionOpen_2->setText(QApplication::translate("MainWindow", "Open", 0));
        actionDecompile->setText(QApplication::translate("MainWindow", "ELFInject", 0));
        actionShellcode2Bin->setText(QApplication::translate("MainWindow", "Shellcode2Bin", 0));
        actionDecompile_2->setText(QApplication::translate("MainWindow", "Decompile", 0));
        actionOpen_File_to_Inject->setText(QApplication::translate("MainWindow", "Open File to Inject ", 0));
        craft_box->setTitle(QString());
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", 0));
        textEdit->setPlaceholderText(QApplication::translate("MainWindow", "enter your bytes: 48 31 C0", 0));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        label_5->setText(QApplication::translate("MainWindow", "little-endian", 0));
        label_6->setText(QApplication::translate("MainWindow", "big-endian", 0));
        groupBox_5->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "SIZE:", 0));
        groupBox_6->setTitle(QString());
        plainTextEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "FAIL-BYTES: 00 0A FF 0D", 0));
        label_3->setText(QApplication::translate("MainWindow", "FAIL-BYTES", 0));
        groupBox_7->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "BYTE", 0));
        byte_2->setText(QString());
        byte_2->setPlaceholderText(QApplication::translate("MainWindow", "00", 0));
        byte_button->setText(QApplication::translate("MainWindow", "ADD", 0));
        pushButton->setText(QApplication::translate("MainWindow", "ADD", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "ADD", 0));
        label_4->setText(QApplication::translate("MainWindow", "WORD", 0));
        word->setPlaceholderText(QApplication::translate("MainWindow", "00 00", 0));
        label_7->setText(QApplication::translate("MainWindow", "DWORD", 0));
        lineEdit_6->setPlaceholderText(QApplication::translate("MainWindow", "00 00 00 00", 0));
        groupBox_9->setTitle(QString());
        plainTextEdit_3->setPlainText(QString());
        logotype->setText(QApplication::translate("MainWindow", "logotype", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Opened File", 0));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"justify\"><span style=\" font-weight:600; font-style:italic;\">if you have no name</span></p><p align=\"justify\"><span style=\" font-weight:600; font-style:italic;\">just smile 13 times</span></p></body></html>", 0));
        groupBox_4->setTitle(QString());
        label_8->setText(QApplication::translate("MainWindow", "F1 - About\n"
"F2 - Add to stack Byte\n"
"F3 - Add to stack Word\n"
"F4 - Add to stack DWord\n"
"F6 - Add to stack ShellCode\n"
"F7 - Clean up Forms\n"
"F8 - Build ShellCode", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Inject File", 0));
        menuLinux_templates->setTitle(QApplication::translate("MainWindow", "Linux templates", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuTool->setTitle(QApplication::translate("MainWindow", "Tools", 0));
#ifndef QT_NO_STATUSTIP
        statusbar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
