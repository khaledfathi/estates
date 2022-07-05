#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <QDialog>

namespace Ui {
class queryResult;
}

class queryResult : public QDialog
{
    Q_OBJECT

public:
    explicit queryResult(QWidget *parent = nullptr);   
    ~queryResult();
    void showData();
    void deleteAll();

private slots:
    void on_buttonExit_clicked();
    void on_buttonDeleteAll_clicked();

private:
    Ui::queryResult *ui;
};

#endif // QUERYRESULT_H
