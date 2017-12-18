#include <stdio.h>

int main(){
	
	int N, x, y, i, soma=0;
	
	scanf("%d", &N);
	for(i=0;i<N;i++){
		scanf("%d%d", &x, &y);
		
		if(x==y){
			printf("0\n");
			soma = 0;
		}
		
		else{
			if(x<y){
				while(x<y){
					x++;
					if(x%2 == 1 && x!=y){
						soma = soma + x;
					}
				}
				printf("%d\n", soma);
				soma = 0;
			}
		
			if(x>y){
				while(y<x){
					y++;
					if(y%2 == 1 && y!=x){
						soma = soma + y;
					}
				}
				printf("%d\n", soma);
				soma = 0;
			}
		}
	}
	
	return 0;
}
