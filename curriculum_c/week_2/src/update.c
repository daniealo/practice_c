

#include <stdio.h>
#include "struct.c"
#include "crud.h"


void update(){
    int search;
    printf("정보를 수정할 학생번호를 입력하세요: ");
    scanf("%d",&search);

    

    struct student *check = head;
    while(check != NULL){
        if(check -> id == search){
            printf("ID       : %d\n", check -> id);
            printf("이름     : %s\n", check -> name);
            printf("이메일    : %s\n", check -> email);
            printf("전화번호  : %s\n", check -> number);

            printf("수정하실 정보가 맞으십니까? 1. YES 2. NO :");
            int choice;
            scanf("%d",&choice);

            if(choice == 1){
                printf("변경하실 항목을 선택하려주세요.");
                printf("1 ) 이메일\n");
                printf("2 ) 전화번호\n");
                printf("3 ) 이메일, 전화번호\n");
                printf("==========>> :");
                int option;
                scanf("%d",&option);
                
                switch(option){
                    case 1:
                        printf("변경하실 이메일 주소를 입력해주세요: ");
                        scanf("%s",check -> email);
                        break;
                        
                    case 2:
                        printf("변경하실 전화번호를 입력해주세요 :");
                        scanf("%s", check -> number);
                        break;

                    case 3:
                        printf("변경하실 이메일 주소를 입력해주세요: ");
                        scanf("%s",check -> email);
    
                        printf("변경하실 전화번호를 입력해주세요 :");
                        scanf("%s", check -> number);
                        break;

                    default :
                        printf("입력이 잘못되었습니다.\n");
                        return ;
                }
            printf("정보가 수정되었습니다.\n");
            return ;

            }else{
                printf("작업을 취소합니다.\n");
                return ;
            }
        }
        check = check -> next;
    }
}