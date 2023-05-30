/*
점수를 입력받아 평균을 내고 등수별로 출력 

1. 점수 input -> 구조체
2. 
*/
#include <stdio.h>
#include "crud.h"
#include <stdbool.h>

int main(){
    int a;
    while(1){
        printf("반갑습니다! 학생관리 시스템입니다. \n 1.학생정보생성\n 2.학생정보열람\n 3.학생정보수정\n 4.학생정보삭제\n 5.종료\n ");
        scanf("%d",&a);
        
        switch (a)
        {
            case 1:
                create();
                break;
            case 2:
                read();
                break;
            case 3:
                update();
                break;
            case 4:
                delete();
                break;
            case 5: 
                return 0;
            
            default :
                printf("잘못된 입력입니다. 다시 시도해주세요. \n");
                break;
        }
        


    }
}