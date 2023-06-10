#include "/users/daniealo/first/mysql_connect/header/mysql.h"
#include <stdio.h>

void input_data() {
        MYSQL *conn;
        MYSQL_RES *res;
        MYSQL_ROW row;

        char *server = "localhost";
        char *user = "root";
        char *password = "1234";
        char *database = "list";

        conn = mysql_init(NULL);
        res = mysql_use_result(conn);

        /* connect to database */
        if (!mysql_real_connect(conn, server, user, password, database, 0 ,NULL, 0)){
                fprintf(stderr, "%s\n", mysql_error(conn));
                exit(1);
        }
// input data 
        if (mysql_query(conn, "insert into datalist (name,address,email,p_num) values('홍다섯','서울시 강남구','ghdektjt05@naver.com','01005500005')")){
                fprintf(stderr, "%s\n", mysql_error(conn));
                exit(1);

              
         
        if (mysql_query(conn, "insert into datalist (name,address,email,p_num) values('홍다섯','서울시 강남구','ghdektjt05@naver.com','01005500005')")){
                fprintf(stderr, "%s\n", mysql_error(conn));
                exit(1);
        }

        res = mysql_use_result(conn);

        /* output table name */
        printf("MYSQL datalist in mysql database: \n");
        while ((row= mysql_fetch_row(res)) != NULL){
            printf("%s ,%s ,%s ,%s \n", row[0],row[1],row[2],row[3]);

        }


        /* close connection */
        mysql_free_result(res);
        mysql_close(conn);
}