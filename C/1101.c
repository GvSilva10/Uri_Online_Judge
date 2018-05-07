#include <stdio.h>

int main () {
	
	int m, n, soma=0, i;
	
	while(scanf("%d%d", &m, &n) && m > 0 && n > 0){
		
		if(m > n){
			for(i=n; i<=m; i++){
				soma = soma + i;
				printf("%d ", i);
			}
			
			printf("Sum=%d\n", soma);
			soma = 0;
		}
		
		if(n > m){
			for(i=m; i<=n; i++){
				soma = soma + i;
				printf("%d ", i);
			}
			
			printf("Sum=%d\n", soma);
			soma = 0;
		}
	}
	
	return 0;
}
