#include <stdio.h>

int main(){
	
	int A, B, i, cont=0;
	
	scanf("%d%d", &A, &B);

	if(B%A == 0){
		printf("Sao Multiplos\n");
	}
	else if(A%B == 0){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");
	}
	
	return 0;
}
