#include <stdio.h>
int main() {
	
	int k;
	int i;
	
	scanf("%d", &k);
	
	for(int i = 1; i <= k; i++){
		for(int a=1; a<=i; a++){
			printf("*");
		}
		printf("\n");
	}
		
}
