
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
        "estatesID"     TEXT NOT NULL,
        "رقم_الشقة"     INTEGER UNIQUE NOT NULL,
        "اسم_المستأجر"  TEXT NOT NULL,
        "الرقم_القومى"  INTEGER NOT NULL,
        "تليفون"        INTEGER,
        "قيمة_الايجار" INTEGER NOT NULL,
        "تاريخ_العقد"   TEXT,
        "تاريخ_انتهاء_العقد"    TEXT NOT NULL,
        "نوع_العقد"     TEXT NOT NULL,
        PRIMARY KEY("ID" AUTOINCREMENT),
        FOREIGN KEY ("estatesID") REFERENCES estates("ID")
);

CREATE TABLE IF NOT EXISTS "money" (
    "ID"	INTEGER NOT NULL UNIQUE,
    "estatesID"	INTEGER NOT NULL,
    "rentersID"	INTEGER,
    "تاريخ_العملية"	TEXT,
    "المبلغ_المدفوع"	INTEGER,
    "نوع_المعاملة"	TEXT,
    "سنة"	INTEGER,
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

