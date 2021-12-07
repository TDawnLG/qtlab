#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include"QPlainTextEdit"


namespace Ui {
class searchDialog;
}

class searchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit searchDialog(QWidget *parent = nullptr,QPlainTextEdit * textEdit = nullptr);
    ~searchDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::searchDialog *ui;

    QPlainTextEdit * pTextEdit;
};

#endif // SEARCHDIALOG_H
