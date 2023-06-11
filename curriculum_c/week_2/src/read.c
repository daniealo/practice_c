#include "mysql_function.h"
#include "crud.h"


void read(){
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    conn = mysql_init(NULL);
    res = mysql_use_result(conn);

    int search,id;
    char name,email,number;

    printf("검색하실 학생번호를 입력하세요: ");
    scanf("%d",&search);

    char tableName[] = "student";
    char columnName[] = "id";
    int check = checkDuplicateData(conn,tableName,columnName,&search);
    char query[100];
    if(check == 1){
        strcpy(query, "SELECT * FROM ");
        strcat(query, tableName);
        strcat(query, " WHERE ");
        strcat(query, columnName);
        strcat(query, " = '");
        sprintf(query + strlen(query), "%d", search);
        strcat(query, "'");
        printqueryresult(conn,query);

    } else if(check == 0) {
        printf("해당학번의 정보가 없습니다.");
        return ;
    }

}
