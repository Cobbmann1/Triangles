#include <stdio.h>

int main(){
	int line, n1, n2, n3;
	printf("Enter Line : ");
	scanf("%d", &line);

	for(n1 = 0; n1 < line; n1++){
		for(n2 = 0; n2 < n1; n2++){
			printf(" ");
			}
			for(n3 = line; n3 > n1; n3--){
				printf("*");
				}
		printf("\n");
		}
}
