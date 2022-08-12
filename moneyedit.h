#ifndef MONEYEDIT_H
#define MONEYEDIT_H

#include <QDialog>

namespace Ui {
class moneyEdit;
}

class moneyEdit : public QDialog
{
    Q_OBJECT

public:
    explicit moneyEdit(QWidget *parent = nullptr);
    ~moneyEdit();

private slots:
    void on_ButtonExit_clicked();

private:
    Ui::moneyEdit *ui;
};

#endif // MONEYEDIT_H
