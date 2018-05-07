#include <stdio.h>

int main () {
	
	int n, x, y;
	float resultado;
	
	scanf("%d", &n);
	
	while(n>0){
		
		scanf("%d%d", &x, &y);
		
		if(y == 0){          
			printf("divisao impossivel\n");
		}
		
		else{
			resultado = (float)x / y;
			printf("%.1f\n", resultado);
		}
		
		n--;
	}

	return 0;
}
