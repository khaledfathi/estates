#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>

namespace Ui {
class about;
}

class about : public QDialog
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = nullptr);
    ~about();

    /*********About APP Section************/

    //Actions
    void actionCloseDialog();
    /************************************/


private slots:
    //*** SIGNAL And SLOT for APP Section ***
    void on_pushButton_clicked();

private:
    Ui::about *ui;
};

#endif // ABOUT_H
