#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QSqlQuery>

class database
{
private:
    QString databaseFile;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

public:
    database(QString fileName);
    bool checkDatabase();
    bool addrecord();
};

#endif // DATABASE_H
