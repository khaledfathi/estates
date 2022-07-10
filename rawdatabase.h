#ifndef RAWDATABASE_H
#define RAWDATABASE_H

#include <QDialog>

namespace Ui {
class rawdatabase;
}

class rawdatabase : public QDialog
{
    Q_OBJECT

public:
    explicit rawdatabase(QWidget *parent = nullptr);
    ~rawdatabase();
    /***************************/
    void defaultSetupUI();
    /***************************/

private slots:
    void on_buttonOK_clicked();

private:
    Ui::rawdatabase *ui;
};

#endif // RAWDATABASE_H
