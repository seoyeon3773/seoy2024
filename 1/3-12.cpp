#include <stdio.h>

int main() {
  int a, b;
  
  printf("a의값: ");
  scanf("%d", &a);
  printf("b의값: ");
  scanf("%d", &b);
  
  printf("교환된 a의 값: %d \n", b);
  printf("교환된 b의 값: %d \n", a);
  return 0;
}

