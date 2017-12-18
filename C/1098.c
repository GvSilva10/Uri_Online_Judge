#include <stdio.h>

int main() {
	
	double i, j, k=1;
	
	for(i=0; i<=2; i+=0.2){
		for(j=k; j<=k+2; j++){
			if(i==0 || i==1 || i==2.0){
				printf("I=%.0lf J=%.0lf\n", i, j);
			}
			else{
			printf("I=%.1lf J=%.1lf\n", i, j);
			}
		}
		k+=0.2;
	}
	
	return 0;
}
