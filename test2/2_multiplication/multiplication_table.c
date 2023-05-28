/*
exercise_2) 구구단을 출력하라.
*/
#include <stdio.h>

int main(){
    int a ,b,c;

    for(a=0;a<10;a++){
            printf(" \n");
        for(b=1;b<10;b++){
        
            c = a * b;
            printf("%d * %d = %d\n",a,b,c);
        }
        
    }

}