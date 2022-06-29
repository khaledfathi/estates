#include "database.h"
#include <QDir>
database::database(QString fileName)
{
    databaseFile = fileName;
    db.setDatabaseName(databaseFile);
}
bool database::checkDatabase()
{
    //Check if database working or not
    db.open();
    bool check = db.isOpen();
    db.close();
    return check;
}

