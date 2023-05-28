/*
exercise_1) 숫자를 입력받고 해당 숫자를 합하여 그 평균 값을 구하여라.

*/
#include <stdio.h>


int main(){
    float a ,b, c;
    printf("입력받은 세가지 숫자의 평균을 구하시오.\n");

    printf("첫번째 숫자를 입력 해주세요:");
    scanf("%f",&a);

    printf("두번째 숫자를 입력 해주세요:");
    scanf("%f",&b);

    printf("세번째 숫자를 입력 해주세요:");
    scanf("%f",&c);

    
    float d = (a+b+c)/3;
    printf("%f + %f + %f / 3 = %f\n",a,b,c,d);
    
}
