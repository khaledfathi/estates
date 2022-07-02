
CREATE TABLE IF NOT EXISTS "estates" (
    "ID"	INTEGER NOT NULL UNIQUE,
    "اسم_رمزى_للعقار"	TEXT NOT NULL UNIQUE,
    "اسم_المالك"	TEXT NOT NULL,
    "عنوان_العقار"	TEXT NOT NULL,
    "عدد_الطوابق"	INTEGER NOT NULL,
    "عدد_الشقق"	INTEGER NOT NULL,
    "تفاصيل_اخرى"	TEXT,
    PRIMARY KEY("ID" AUTOINCREMENT)
);

CREATE TABLE IF NOT EXISTS "renters" (
        "ID"    INTEGER NOT NULL UNIQUE,
        "estatesID"     INTEGER  NOT NULL,
        "رقم_الشقة"     INTEGER UNIQUE NOT NULL,
        "نوع_العين_المؤجرة"  TEXT  NOT NULL,
        "اسم_المستأجر"  TEXT  NOT NULL,
        "الرقم_القومى"  TEXT  NOT NULL,
        "تليفون"        TEXT,
        "قيمة_الايجار" REAL NOT NULL,
        "تاريخ_العقد"   TEXT NOT NULL,
        "تاريخ_انتهاء_العقد"    TEXT NOT NULL,
        "نوع_العقد"     TEXT NOT NULL,
        PRIMARY KEY("ID" AUTOINCREMENT),
        FOREIGN KEY ("estatesID") REFERENCES estates("ID")
);

CREATE TABLE IF NOT EXISTS "money" (
    "ID"	INTEGER NOT NULL UNIQUE,
    "estatesID"	INTEGER UNIQUE NOT NULL,
    "rentersID"	INTEGER UNIQUE NOT NULL,
    "تاريخ_العملية"	TEXT NOT NULL,
    "المبلغ_المدفوع"	 REAL NOT NULL,
    "نوع_المعاملة"	TEXT NOT NULL,
    "سنة"	INTEGER NOT NULL,
    "تفاصيل_اخرى"	INTEGER,
    PRIMARY KEY("ID" AUTOINCREMENT),
    FOREIGN KEY ("estatesID") REFERENCES estates("ID"),
    FOREIGN KEY ("rentersID") REFERENCES renters("ID")
);

CREATE TABLE IF NOT EXISTS "water_invoice" (
    "ID"	INTEGER NOT NULL UNIQUE,
    "estatesID"	INTEGER NOT NULL,
    "عن_شهر"	TEXT,
    "سنة"	INTEGER,
    PRIMARY KEY("ID" AUTOINCREMENT),
    FOREIGN KEY ("estatesID") REFERENCES estates("ID")
);

