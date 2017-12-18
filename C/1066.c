#include <stdio.h>

int main () {
	int n, i, contPa=0, contI=0, contP=0, contN=0;
	
	for(i=0; i<5; i++){
		scanf("%d", &n);
		
		if(n%2 == 0){
			contPa++;
		}
		if(n%2!=0){
			contI++;
		}
		if(n>0){
			contP++;
		}
		if(n<0){
			contN++;
		}
	}
	
	printf("%d valor(es) par(es)\n", contPa);
	printf("%d valor(es) impar(es)\n", contI);
	printf("%d valor(es) positivo(s)\n", contP);
	printf("%d valor(es) negativo(s)\n", contN);
	
	return 0;
}
