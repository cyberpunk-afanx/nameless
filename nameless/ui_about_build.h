/********************************************************************************
** Form generated from reading UI file 'about_build.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_BUILD_H
#define UI_ABOUT_BUILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_about_build
{
public:
    QLabel *logotype;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QLabel *label_4;
    QLabel *afanx;

    void setupUi(QDialog *about_build)
    {
        if (about_build->objectName().isEmpty())
            about_build->setObjectName(QStringLiteral("about_build"));
        about_build->resize(439, 738);
        logotype = new QLabel(about_build);
        logotype->setObjectName(QStringLiteral("logotype"));
        logotype->setGeometry(QRect(21, 20, 439, 131));
        label = new QLabel(about_build);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 160, 231, 17));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(about_build);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 160, 91, 17));
        label_2->setFont(font);
        textBrowser = new QTextBrowser(about_build);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 220, 421, 192));
        QFont font1;
        font1.setFamily(QStringLiteral("Courier New"));
        textBrowser->setFont(font1);
        label_3 = new QLabel(about_build);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(11, 197, 111, 17));
        QFont font2;
        font2.setFamily(QStringLiteral("Courier New"));
        font2.setBold(true);
        label_3->setFont(font2);
        textBrowser_2 = new QTextBrowser(about_build);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 440, 421, 111));
        textBrowser_2->setFont(font1);
        label_4 = new QLabel(about_build);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(12, 420, 111, 17));
        QFont font3;
        font3.setFamily(QStringLiteral("Courier New"));
        font3.setPointSize(8);
        font3.setBold(true);
        label_4->setFont(font3);
        afanx = new QLabel(about_build);
        afanx->setObjectName(QStringLiteral("afanx"));
        afanx->setGeometry(QRect(140, 560, 141, 161));

        retranslateUi(about_build);

        QMetaObject::connectSlotsByName(about_build);
    } // setupUi

    void retranslateUi(QDialog *about_build)
    {
        about_build->setWindowTitle(QApplication::translate("about_build", "About Build", 0));
        logotype->setText(QApplication::translate("about_build", "TextLabel", 0));
        label->setText(QApplication::translate("about_build", "nameless build 08012023", 0));
        label_2->setText(QApplication::translate("about_build", "by AFANX", 0));
        textBrowser->setHtml(QApplication::translate("about_build", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Courier New'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">This program is designed for shellcode construction. To build a shellcode it is enough to have bytes of the compiled program written in Assembler language. </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">This program will give you the shellcode if you gave bytes. The result will show the length of the shellcode, the wrong bytes, their position and the number of fail bytes. If a string was fed, it will give you the result in little-end and big-end format. There is also a field for payload construct. You can also put BYTE, WORD, DWORD in the payload. </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">In nameless, you can write shellcodes in Assembly language and the result will be a HEX string that can be translated into shellcode. There is also a reverse operation. If you have a shellcode, y"
                        "ou can translate it into Assembler language.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">nameless has a small database of ready-made shellcodes for Linux.</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("about_build", "About program", 0));
        textBrowser_2->setHtml(QApplication::translate("about_build", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Courier New'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- The hotkeys work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Shellcode construction is working</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Field with erroneous bytes</span></p>\n"
"<p style=\" margin-top:0px"
                        "; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Translation in little-end and big-end works</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">- Working fields for BYTE, WORD, DWORD</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">-   Stack is working with some bugs</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt;\">-   Opening compiled files with shellcodes</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("about_build", "About build", 0));
        afanx->setText(QApplication::translate("about_build", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class about_build: public Ui_about_build {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_BUILD_H
