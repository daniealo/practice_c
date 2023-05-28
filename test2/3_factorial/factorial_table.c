/*
exercise_3) 숫자를 입력받고 해당 수의 팩토리얼 값을 산출하라.
*/
#include <stdio.h>

int main(){
    int a,b=1,i;
    
    printf("팩토리얼 알고리즘을 작성하라\n");

    printf("계산할 값을 입력하세요: ");
    scanf("%d",&a);

    printf("입력값: %d\n",a);

    for(i=1; i <= a; i++) {
        b *= i;
    }

    printf("입력된 값의 팩토리얼은 %d 입니다.\n",b);
    return 0;
}