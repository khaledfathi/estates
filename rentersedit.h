#ifndef RENTERSEDIT_H
#define RENTERSEDIT_H

#include <QDialog>

namespace Ui {
class rentersedit;
}

class rentersedit : public QDialog
{
    Q_OBJECT

public:
    explicit rentersedit(QWidget *parent = nullptr);
    ~rentersedit();

private slots:

    void on_pushButton_clicked();

private:
    Ui::rentersedit *ui;
};

#endif // RENTERSEDIT_H
