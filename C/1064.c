#include <stdio.h>

int main() {
	
	int i, cont=0;
	float n, media=0;
	
	for(i=0; i<6; i++){
		scanf("%f", &n);
		if(n>0){
			cont++;
			media = media + n;
		}
	}
	printf("%d valores positivos\n", cont);
	printf("%.1f\n", media/cont);
	
	return 0;
}
