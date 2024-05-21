#include <stdio.h>

int main(void) {
    int a=20;
    double b=10.1;
    double c=0.00008;

    printf("실수를 부호 없는 정수로 b=%10u \t", b);
    printf("실수를 부호 있는 정수로 b=%10d \n\n", b);

    printf("부호 있는 실수로 b=%10f \t", a);
    printf("정수를 부호 있는 실수로 a=%4f \n\n", a);

    printf("정수를 8진수로 a=%5o \t", a);
    printf("정수를 16진수로 a=%5x \n\n", a);

    printf("실수의 지수형 표기 b=%10e \t", b);
    printf("g(b)=%10g \n\n", b);
    printf("실수의 지수형 표기 a=%10g \n\n", c);

    printf("포인터 출력 &a=%10p \n", &a);
}