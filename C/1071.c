#include <stdio.h>

int main() {
	int x,y,i,soma=0;
	scanf("%d%d", &x, &y);
	
	for(i=x; i>y; i--){
		if(i%2 != 0 && i!=x){
			soma = soma+i;
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
}
