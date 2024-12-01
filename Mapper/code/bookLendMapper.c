#include <stdio.h>
#include <mysql.h>
#include "../head/mysqlPointer.h"

int CheckBook(int id) {
    char ID[50];
    sprintf(ID, "%d", id);

    char sql[256];
    strcpy(sql, "SELECT * FROM book WHERE id=");
    strcat(sql, ID);
    strcat(sql, ";");

    if (mysql_query(conn, sql)) {
        fprintf(stderr, "SQL error: %s\n", mysql_error(conn));
        return -1;
    }

    res = mysql_use_result(conn);
    if ((row = mysql_fetch_row(res))) {
        mysql_free_result(res);
        return 0
    } else {
        mysql_free_result(res);
        return -1;
    }
}
int GetBookNum(int id) {
    char ID[50];
    sprintf(ID, "%d", id);

    char sql[256];
    strcpy(sql, "SELECT * FROM book WHERE id=");
    strcat(sql, ID);
    strcat(sql, ";");

    if (mysql_query(conn, sql)) {
        fprintf(stderr, "SQL error: %s\n", mysql_error(conn));
        return -1;
    }

    res = mysql_use_result(conn);
    if ((row = mysql_fetch_row(res))) {
        int a=row[3];
        mysql_free_result(res);
        return a;
    } else {
        mysql_free_result(res);
        return -1;
    }
}
MYSQL_ROW SelectByID(int id){
    char ID[50];
    sprintf(ID, "%d", id);

    char sql[256];
    strcpy(sql, "SELECT * FROM book WHERE id=");
    strcat(sql, ID);
    strcat(sql, ";");

    if (mysql_query(conn, sql)) {
        fprintf(stderr, "SQL error: %s\n", mysql_error(conn));
        return NULL;
    }
    res= mysql_use_result(res);
    return mysql_fetch_row(res);
}
MYSQL_ROWS SelectByName(char* name){
    char sql[256];
    strcpy(sql, "SELECT * FROM book WHERE id like ");
    strcat(sql, "'%");
    strcat(sql, name);
    strcat(sql, "%';");

    if (mysql_query(conn, sql)) {
        fprintf(stderr, "SQL error: %s\n", mysql_error(conn));
        return (MYSQL_ROWS) NULL;
    }
    MYSQL_ROWS rows;
    res= mysql_use_result(res);
    int i=0;
    while ((row= mysql_fetch_row(res))){
        rows[i]=row;
        i++;
    }
    return rows;
}
int AddBorrow(int userid,char* name,int bookid,char* time){
    char sql[256];
    strcpy(sql, "insert into borrow ");
    strcat(sql, "'%");
    strcat(sql, name);
    strcat(sql, "%';");

    if (mysql_query(conn, sql)) {
        fprintf(stderr, "SQL error: %s\n", mysql_error(conn));
        return (MYSQL_ROWS) NULL;
    }
}