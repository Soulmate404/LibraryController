//
// Created by 14403 on 2024/11/29.
//

#ifndef LIBRARYCONTROLLER_USERLOGINSERVICE_H
#define LIBRARYCONTROLLER_USERLOGINSERVICE_H

#include <mysql.h>


int login(int id,char* pass_wd);
char* resetPass(int id,char* c1,char* c2);
#endif //LIBRARYCONTROLLER_USERLOGINSERVICE_H
