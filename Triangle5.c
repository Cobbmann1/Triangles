#include <stdio.h>

int main(){
	int line, n1, n2, n3,space;
	printf("Enter Line : ");
	scanf("%d", &line);
	space = line - 1;

	for(n1 = 1; n1 <= line; n1++){
		for(n2 = space; n2>0; n2--){
			printf(" ");
			}
		for(n3 = (2 * n1) -1; n3 > 0 ; n3--){
			printf("*");
			}
		printf("\n");
		space--;
		}
		
}
