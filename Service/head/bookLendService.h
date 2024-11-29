//
// Created by 14403 on 2024/11/29.
//

#ifndef LIBRARYCONTROLLER_BOOKLENDSERVICE_H
#define LIBRARYCONTROLLER_BOOKLENDSERVICE_H
int selectByID(int id);
int selectByName(char* name);
int addBorrow(int userid,char* name,int bookid,char* time);
int deleteBorrow(int userid,int bookid);
#endif //LIBRARYCONTROLLER_BOOKLENDSERVICE_H
