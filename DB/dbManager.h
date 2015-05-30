//
// Created by Nathan on 5/30/2015.
//

#ifndef LEXICON_DBACCESSOR_H
#define LEXICON_DBACCESSOR_H
#define DB "DB/JMdict.db"

#include <stdio.h>
#include <bits/stringfwd.h>
#include <bits/basic_string.h>
#include "sqlite3.h"

class dbManager {

public:
    sqlite3 *dbfile;
    bool isOpenDB;

    dbManager();
    ~dbManager();
    bool ConnectDB();
    void DisconnectDB();
    int addRow();
    int updateRow();
    void getTableData(std::string table);

};


#endif //LEXICON_DBACCESSOR_H
