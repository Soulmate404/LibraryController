//
// Created by 14403 on 2024/11/29.
//

#include <mysql.h>

#ifndef LIBRARYCONTROLLER_ADMINISTRATORMAPPER_H
#define LIBRARYCONTROLLER_ADMINISTRATORMAPPER_H
int CheckBook(int id);
int CheckUser(int id);
MYSQL_ROW SelectUser(int id);
int AddBooks(int id,char* name,char* writer,int last_num,char* position);
int AddUser(int id,char* name,char* pass_wd,int authority);
int DeleteBook(int id);
int UpdateUserAuthority(int id,int authority);
MYSQL_ROWS CheckUserBorrow(int id);
MYSQL_ROWS CheckAllBorrow();
MYSQL_ROWS CheckBooksBorrow(int id);
int RootResetPass(int id,char* pass);
#endif //LIBRARYCONTROLLER_ADMINISTRATORMAPPER_H
