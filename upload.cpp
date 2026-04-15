#include "upload.h"
#include "ui_upload.h"

#include <QFileDialog>
#include <QString>
#include <QFileInfo>
#include <QFile>
#include <QMessageBox>
#include <QDir>
#include <string>

Upload::Upload(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Upload)
{
    ui->setupUi(this);
}

Upload::~Upload()
{
    delete ui;
}

void Upload::show_window()
{
    this->show();
    ui->Email_Input->clear();
    in_email = ""; in_sub = ""; in_sem = "Semester"; in_year = "Year";
}

void Upload::on_Upload_Button_clicked()
{
    if (!check_info_validtity())
    {
        QMessageBox::warning(this, "Uploading File", "Invalid Info/Email Entered");
        return;
    }

    QString File_Path = QFileDialog::getOpenFileName(this, "Upload ur paper", QDir::homePath(), "Documents (*.pdf)");
    if (File_Path.isEmpty())
        return;

    QString folderPath = "Users Papers/" + in_email;
    QDir dir;
    if (!dir.exists(folderPath))
        dir.mkpath(folderPath);

    QString New_Name = in_sub + "_" + in_sem + "_" + in_year + ".pdf";
    QString Des_Path = folderPath + "/" + New_Name;

    if (QFile::exists(Des_Path))
        QFile::remove(Des_Path);

    if (QFile::copy(File_Path, Des_Path))
    {
        QMessageBox::information(this, "Uploading File", "File Uploaded Successfully.");
        this->close();
    }
    else {
        QMessageBox::warning(this, "Uploading File", "Copy failed. Error: " + QFile(File_Path).errorString());
    }
}

void Upload::on_Email_Input_textChanged(const QString &text)
{
    in_email = text;
}


void Upload::on_Exit_Button_clicked()
{
    this->close();
}

bool Upload::check_email_validity()
{
    bool valid1 = true,valid2 = false;

    if (in_email == "")
    {
        QMessageBox::warning(this,"Uploading File","You havn't entered an email");
        return false;
    }

    if (!in_email.contains('@'))
        valid1 = false;

    for (QString &tld:tlds)
    {
        if (in_email.endsWith(tld,Qt::CaseInsensitive))
        {
            valid2 = true;
            break;
        }
    }

    if (valid1 && valid2)
        return true;
    else
    {
        QMessageBox::warning(this,"Uploading File","Invalid Email Entered");
        return false;
    }
}

bool Upload::check_info_validtity()
{
    bool info = true;
    if (!check_email_validity())
        info = false;

    if (in_sub == "")
        info = false;

    if (in_sem == "Semester")
        info = false;

    if (in_year == "Year")
        info = false;

    if (!info)
    {
        QMessageBox::warning(this,"Uploading File","Invalid Information Entered");
        return false;
    }
    else
        return true;
}

void Upload::on_Sem_Select_currentTextChanged(const QString &text)
{
    in_sem = text;
}


void Upload::on_Year_Select_currentTextChanged(const QString &text)
{
    in_year = text;
}


void Upload::on_Subject_Input_textChanged(const QString &text)
{
    in_sub = text;
}

