#ifndef UPLOAD_H
#define UPLOAD_H

#include <QMainWindow>
#include <QVector>

namespace Ui {
class Upload;
}

class Upload : public QMainWindow
{
    Q_OBJECT

public:
    explicit Upload(QWidget *parent = nullptr);
    void show_window();
    ~Upload();

private slots:

    void on_Upload_Button_clicked();
    void on_Email_Input_textChanged(const QString &text);
    void on_Exit_Button_clicked();
    bool check_email_validity();
    bool check_info_validtity();



    void on_Sem_Select_currentTextChanged(const QString &arg1);

    void on_Year_Select_currentTextChanged(const QString &arg1);

    void on_Subject_Input_textChanged(const QString &arg1);

private:
    Ui::Upload *ui;
    QString in_email,in_sub,in_sem,in_year;
    QVector<QString> tlds = {
         ".com", ".org", ".net", ".edu", ".gov", ".mil",
         ".pk", ".uk", ".us", ".in", ".ca", ".au",
         ".co.uk", ".com.pk", ".gov.pk",
         ".app", ".tech", ".online", ".xyz", ".ai"
    };
};

#endif // UPLOAD_H
