//
// Created by 14403 on 2024/12/1.
//

#ifndef LIBRARYCONTROLLER_MYSQLPOINTER_H
#define LIBRARYCONTROLLER_MYSQLPOINTER_H

#include <mysql.h>

extern MYSQL *conn;
extern MYSQL_RES *res;
extern MYSQL_ROW row;
extern MYSQL_STMT* stmt ;
#endif //LIBRARYCONTROLLER_MYSQLPOINTER_H
