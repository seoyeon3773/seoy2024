#include <stdio.h>
int main()
{
    char *p;
    p = "abcd";
    printf("포인터변수를 이용한 문자열: %s\n", p);
    printf("출력문의 제어 문자열: abcd\n");
    printf("문자열 값을 출력: %s\n","abcd");
    printf("낱개 문자로 출력: %c%c%c%c\n", 'a','b','c','d');
}