//
// Created by 14403 on 2024/11/29.
//

#include <mysql.h>

#ifndef LIBRARYCONTROLLER_BOOKLENDMAPPER_H
#define LIBRARYCONTROLLER_BOOKLENDMAPPER_H
int CheckBook(int id);
int GetBookNum(int id);
MYSQL_ROW SelectByID(int id);
MYSQL_ROWS SelectByName(char* name);
int AddBorrow(int userid, char* name, int bookid, char* time);
int DeleteBorrow(int userid,int bookid);
int CheckBorrow(int userid,int bookid);
#endif //LIBRARYCONTROLLER_BOOKLENDMAPPER_H
