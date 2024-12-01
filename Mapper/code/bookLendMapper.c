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
        return -1; // 返回-1表示查询失败
    }

    res = mysql_use_result(conn);
    if ((row = mysql_fetch_row(res))) {
        mysql_free_result(res);
        return atoi(row[0]); // 假设第一列是书籍的ID，返回找到的书籍ID
    } else {
        mysql_free_result(res);
        return 0; // 没有找到书籍，返回0
    }
}