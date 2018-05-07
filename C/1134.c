#include <stdio.h>

int main() {
	
	int x, alc=0, gas=0, die=0;
	
	do{
		scanf("%d", &x);
		
		if(x == 1){
			alc++;
		}
		if(x == 2){
			gas++;
		}
		if(x == 3){
			die++;
		}
		
	}while(x!=4);
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die);
	
	return 0;
}
