#include <stdio.h>
#include "crud.h"
#include <stddef.h>

extern student s[30];

void create(){
    
    int create_count=0 ,j, brk=0;

    
    
        if(s[create_count].name[0] == '\0'){
            printf("학생의 이름을 입력하세요: ");
            scanf("%s",s[create_count].name);

            printf("학생의 이메일 주소를 입력하세요:");
            scanf("%s",s[create_count].email);

            printf("학생의 전화번호를 입력하세요:");
            scanf("%s",s[create_count].number);

            for (j=0; j<29 ; j++){
                s[0].id = 1;
                if(s[create_count-1].id == j || s[create_count].id == 0){
                    s[create_count].id = j+1;
                    break;
                }
            create_count += 1;
        
            }

        }
        else{
            create_count += 1;
    
        }
        
        
        
        
    
}