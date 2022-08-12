#ifndef PRINTPREVIEW_H
#define PRINTPREVIEW_H

#include <QDialog>

namespace Ui {
class printpreview;
}

class printpreview : public QDialog
{
    Q_OBJECT

public:
    explicit printpreview(QWidget *parent = nullptr , QList<QString> data={});
    QList<QString> data_ ={};
    ~printpreview();
    void defaultUI();

private slots:
    void on_buttonExit_clicked();

    void on_buttonPrint_clicked();

private:
    Ui::printpreview *ui;
};



#endif // PRINTPREVIEW_H
