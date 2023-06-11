#include "crud.h"
#include "mysql_function.h"

void create(){
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;
    conn = mysql_init(NULL);
    res = mysql_use_result(conn);

    char query[100];
    char *name,*email,*number;
    int create_id;

    printf("생성하실 학생번호를 입력하세요: ");
    scanf("%d",&create_id);

    char tableName[] = "student";
    char columnName[] = "id";

    int check = checkDuplicateData(conn,tableName,columnName,&create_id);
    

    if (check == 1) {
        printf("입력한 데이터는 중복됩니다.\n");
        return ;

    } else if (check == 0) {
        printf("등록하실 학생의 이름을 입력하세요: ");
        scanf("%s",name);
            
        printf("등록하실 학생의 이메일을 입력하세요: ");
        scanf("%s",email);

        printf("등록하실 학생의 전화번호를 입력하세요: ");
        scanf("%s",number);

        sprintf(query, "INSERT INTO student (id, name, email, number) VALUES (%d, '%s', '%s', '%s')",create_id, name, email, number);
        
        if (mysql_query(conn, query)){
            fprintf(stderr, "%s\n", mysql_error(conn));
            exit(1);
        }
    } else {
        printf("중복 체크 오류\n");
    }
    

}

        
        

    
