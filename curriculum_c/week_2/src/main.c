#include "crud.h"
#include "mysql_function.h"

int main(){
    MYSQL *conn ;
    MYSQL_RES *res;
    MYSQL_ROW row ;
   void connect();

    int choice;
    while(1){
        printf("\n반갑습니다! 학생관리 시스템입니다. \n 1.학생정보생성\n 2.학생정보열람\n 3.학생정보수정\n 4.학생정보삭제\n 5.종료\n ");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
                create();
                break;
            case 2:
                read();
                break;
            case 3:
                //update();
                break;
            case 4:
                //delete();
                break;
            case 5: 
                return 0;
            
            default :
                printf("잘못된 입력입니다. 다시 시도해주세요. \n");
                break;
        }
    }

    mysql_free_result(res);
    mysql_close(conn);   
}