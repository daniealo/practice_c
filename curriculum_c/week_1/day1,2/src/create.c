#include <stdio.h>
#include "crud.h"
#include <stddef.h>

extern student s[30];

void create(){
    
    int i ,j, brk=0;

    
    for (i=0; brk != 1; i++){
        if(s[i].name[0] == '\0'){
            printf("학생의 이름을 입력하세요: ");
            scanf("%s",s[i].name);

            printf("학생의 이메일 주소를 입력하세요:");
            scanf("%s",s[i].email);

            printf("학생의 전화번호를 입력하세요:");
            scanf("%s",s[i].number);

            for (j=0; j<29 ; j++){
                s[0].id = 1;
                if(s[i-1].id == j || s[i].id == 0){
                    s[i].id = j+1;
                    break;
                }
            
            
            }

        }
        else{
            i += 1;
    
        }
        printf("종료하시겠습니까? 1.YES 2.NO\n ");
        scanf("%d",&brk);
        
        
        
    }
}