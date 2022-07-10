#ifndef QUERY_H
#define QUERY_H

#include <QDialog>

namespace Ui {
class query;
}

class query : public QDialog
{
    Q_OBJECT

public:
    QList<QString> data;
    bool renterChecked;
    explicit query(QWidget *parent = nullptr , QList<QString> fieldData={}, bool isRenterChecked=false);
    ~query();
    /************/
    void results();
    /************/

private slots:

    //*** SIGNAL AND SLOT ***
    void on_buttonExit_clicked();

private:
    Ui::query *ui;
};

#endif // QUERY_H
