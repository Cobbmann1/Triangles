#include <stdio.h>

int main(){
	int line, n1, n2, n3;
	printf("Enter Line : ");
	scanf("%d", &line);

	for(n1 = 0; n1 < line; n1++){
		for(n2 = line; n2 > n1; n2--){
			printf("*");
			}
		printf("\n");
		}
}
