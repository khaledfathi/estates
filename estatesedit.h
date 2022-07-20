#ifndef ESTATESEDIT_H
#define ESTATESEDIT_H

#include <QDialog>

namespace Ui {
class estatesedit;
}

class estatesedit : public QDialog
{
    Q_OBJECT

public:
    explicit estatesedit(QWidget *parent = nullptr);
    ~estatesedit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::estatesedit *ui;
};

#endif // ESTATESEDIT_H
