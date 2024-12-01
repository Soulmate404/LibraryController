#include <string.h>
#include "mysql.h"
#include <stdio.h>
#include <stdlib.h>


MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;
const char *server = "localhost";
const char *user = "root";
const char *password = "guo12345";
const char *database = "librarymanager";
void init(){
    conn = mysql_init(NULL);
    if (mysql_real_connect(conn, server, user, password, database, 3306, NULL, 0)) {
        printf("success\n");
    }
}

int CheckUser(int id, char* pass_wd) {
    char ID[50];
    sprintf(ID, "%d", id);

    char sql[256];
    strcpy(sql, "select * from user where id=");
    strcat(sql, ID);
    strcat(sql, " and pass_wd = '");
    strcat(sql, pass_wd);
    strcat(sql, "'");
    mysql_query(conn,sql);
    res= mysql_store_result(conn);
    int s= mysql_num_fields(res);
    while ((row = mysql_fetch_row(res))){//这里的判断是判断row是不是一个空指针,如果是则停止输出
        int i = 0;
        for (i = 0;  i< s; i++) {
            printf("%s\t",row[i]);
        }
    }

    printf("\n");
    //int authority= atoi(row[3]);

    mysql_close(conn);
    return 0;

}