#include <stdio.h>
#include <string.h>
#include "crud.h"

extern student s[30];

void read(){

    int i;
    char name[30];
    //name,s_name,s_email,s_number;

    printf("검색할 학생의 이름을 입력해주세요:");
    scanf("%s",name);

    for(i=0; i<30; i++){

        if (strcmp(s[i].name,name) == 0){
            printf(" 이름: %s\n ID: %d\n email: %s\n 전화번호: %s\n",s[i].name,s[i].id,s[i].email,s[i].number);
            break;
        }
        else{
            printf("죄송합니다 찾으시는 정보가 없습니다.");
            return ;
        }
    }
}