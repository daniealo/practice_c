#include "/users/daniealo/first/mysql_connect/header/mysql.h"
#include "mysql_function.h"
#include <stdio.h>


void connect(){
MYSQL *conn ;
MYSQL_RES *res;
MYSQL_ROW row ;
char *server = "localhost";
char *user = "root";
char *password = "1234";
char *database = "management";

conn = mysql_init(NULL);
res = mysql_use_result(conn);

if (!mysql_real_connect(conn, server, user, password, database, 0 ,NULL, 0)){
            fprintf(stderr, "%s\n", mysql_error(conn));
            exit(1);
    }


}