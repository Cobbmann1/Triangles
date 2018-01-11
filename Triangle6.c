#include <stdio.h>

int main(){
	int line, n1, n2, n3,star;
	printf("Enter Line : ");
	scanf("%d", &line);
	star = line;

	for(n1 = 0; n1 < line; n1++){
		for(n2 = 0; n2<n1; n2++){
			printf(" ");
			}
		for(n3 = (2 * star ) -1; n3 > 0 ; n3--){
			printf("*");
			}
		printf("\n");
		star--;
		}
		
}
