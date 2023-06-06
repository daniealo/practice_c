
#include <stdio.h>
#include <stdlib.h>
#include "struct.c"
#include "crud.h"


void create(){
    

    struct student *cre_info = (struct student*)malloc(sizeof(struct student*));
    struct student *check = head ;
    

    printf("생성하실 학생번호를 입력하세요: ");
    scanf("%d",&cre_info -> id);
    

    while (check != NULL){
        
        // 학생정보 생성전 중복된 학생정보인지 체크
        if(check -> id == cre_info -> id){
            printf("이미 있는 학생번호 입니다.");
            free(cre_info);
            return ;
        }
        check = check -> next;

    }
    
    printf("등록하실 학생의 이름을 입력하세요: ");
    scanf("%s",cre_info -> name);
        

    printf("등록하실 학생의 이메일을 입력하세요: ");
    scanf("%s",cre_info -> email);


    printf("등록하실 학생의 전화번호를 입력하세요: ");
    scanf("%s",cre_info -> number);


    // 아래는 실질적으로 연결리스트가 가르키는 포인터(NULL로 초기화)
    cre_info -> prev = NULL;
    cre_info -> next = NULL;

    if (head == NULL){
        head = cre_info;
        tail = cre_info;
    }else {
        tail -> next = cre_info;
        cre_info -> prev = tail;
        tail = cre_info;
        }

}

        
        
        
        
    
