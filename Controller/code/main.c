#include <stdio.h>
#include <mysql.h>
#include "../../Mapper/head/bookLendMapper.h"
MYSQL *conn;
MYSQL_RES *res;
MYSQL_ROW row;
//当前的main函数是一个检测数据库连接性的函数，我留在这里
int main(void){
    conn = mysql_init(NULL);
    /*连接数据库部分*/

    /*输入你的数据库信息*/
    const char *server = "localhost";
    const char *user = "root";
    const char *password = "guo12345";
    const char *database = "librarymanager";

    /*尝试连接*/
    if (mysql_real_connect(conn, server, user, password, database, 3306, NULL, 0)) {
        printf("asd");

    }
    char* sql="select * from book ";
    if(0==mysql_query(conn,sql)){
        printf("success");
    } else{
        printf("fail");
    }
    MYSQL_RES* res=mysql_store_result(conn);
    int rows= mysql_num_rows(res);
    printf("%d",rows);

    /*关闭数据库*/
    mysql_close(conn);
    return 0;
}
