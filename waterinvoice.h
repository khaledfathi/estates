#ifndef WATERINVOICE_H
#define WATERINVOICE_H

#include <QDialog>

namespace Ui {
class waterInvoice;
}

class waterInvoice : public QDialog
{
    Q_OBJECT

public:
    explicit waterInvoice(QWidget *parent = nullptr);
    ~waterInvoice();

private slots:
    void on_pushButton_2_clicked();


private:
    Ui::waterInvoice *ui;
};

#endif // WATERINVOICE_H
