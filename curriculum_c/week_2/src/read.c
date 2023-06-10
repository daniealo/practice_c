
#include <stdio.h>
#include "struct.c"
#include "crud.h"
//extern struct student s[30];


void read(){


    int search;
    struct student * check = head;

    printf("검색하실 학생번호를 입력하세요: ");
    scanf("%d",&search);

    while(check != NULL){
        if(check -> id == search){
            printf("ID: %d \n", check -> id);
            printf("이름: %s \n", check -> name);
            printf("이메일: %s\n", check -> email);
            printf("전화번호: %s\n", check -> number);

            return ;
        }
        check = check -> next;
    }
    printf("해당학번에 정보를 찾을 수 없습니다.\n");
}
