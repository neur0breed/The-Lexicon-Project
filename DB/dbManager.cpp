//
// Created by Nathan on 5/30/2015.
//

#include <iosfwd>
#include <sstream>
#include <iostream>
#include "dbManager.h"

dbManager::dbManager()
{
    this->isOpenDB = false;
}

dbManager::~dbManager()
{

}

bool dbManager::ConnectDB()
{
    if (sqlite3_open(DB, &dbfile) == SQLITE_OK )
    {
        isOpenDB = true;
        return true;
    }

    return false;
}

void dbManager::DisconnectDB()
{
    if (isOpenDB)
    {
        sqlite3_close(dbfile);
    }
}

int dbManager::addRow() // add arguments to this function??
{
    std::stringstream strm;
    // unnecessary, but here for stream adaptation later
    strm << "INSERT INTO JAPANESE(ID, WORD, LEXICON) VALUES(1, 'する','verb')";

    std::string s = strm.str();
    char *str = &s[0];
    sqlite3_stmt *statement;
    int result = 0;

    char *query = str;

    if(sqlite3_prepare(dbfile, query, -1, &statement, 0) == SQLITE_OK)
    {
        int res = sqlite3_step(statement);
        result = res;
        sqlite3_finalize(statement);
    }

    return result;
}

int dbManager::updateRow() // broken; just adds another row
{
    std::stringstream strm;
    // unnecessary, but here for stream adaptation later
    strm << "INSERT INTO JAPANESE(ID, WORD, LEXICON) VALUES(1, 'くる','verb')";

    std::string s = strm.str();
    char *str = &s[0];
    sqlite3_stmt *statement;
    int result = 0;

    char *query = str;

    if(sqlite3_prepare(dbfile, query, -1, &statement, 0) == SQLITE_OK)
    {
        int res = sqlite3_step(statement);
        result = res;
        sqlite3_finalize(statement);
    }

    return result;
}

void dbManager::getTableData(std::string table)
{
    std::stringstream strm;
    // unnecessary, but here for stream adaptation later
    strm << "select * from " << table;

    std::string s = strm.str();
    char *str = &s[0];
    sqlite3_stmt *statement;
    int result = 0;

    char *query = str;

    if(sqlite3_prepare(dbfile, query, -1, &statement, 0) == SQLITE_OK)
    {
        int ctotal = sqlite3_column_count(statement);
        int res = 0;

        while(true)
        {
            res = sqlite3_step(statement);

            if(res == SQLITE_ROW)
            {
                for(int i = 0; i < ctotal; i++)
                {
                    std::string s = (char*)sqlite3_column_text(statement, i);
                    std::cout << s << std::endl;
                }
                std::cout << std::endl;
            }
            if(res == SQLITE_DONE || res == SQLITE_ERROR)
            {
                std::cout << "done " << std::endl;
                break;
            }
        }
    }
}