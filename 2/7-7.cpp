#include <stdio.h>

void add(char c[], char d[]) {
	printf("%s%s",c,d);
} 

char a[100];
char b[100];

int main() {
	scanf("%s", a);
	scanf("%s", b);
	add(a,b);
	
}
