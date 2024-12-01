#include <stdio.h>
#include <mysql.h>
#include "../../Mapper/head/userLoginMapper.h"


//当前的main函数是一个检测数据库连接性的函数，我留在这里
int main(void){
    init();
    int id=1;
    char* pass="guo12345";
    int a=CheckUser(id,pass);
    printf("%d",a);



    return 0;
}
