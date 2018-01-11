#include <stdio.h>

int main(){
	int line, n1, n2;
	printf("Enter Line : ");
	scanf("%d", &line);

	for(n1 = 1; n1 <= line; n1++){
		for(n2 = 0; n2 < n1; n2++){
			printf("*");
			}
		printf("\n");
		}
}
