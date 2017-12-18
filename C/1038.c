#include <stdio.h>

int main(){
	
	int C, Q;
	float T;
	scanf("%d%d", &C, &Q);
	
	switch (C){
		case 1:
			T = 4.00 * Q;
			printf("Total: R$ %.2f\n", T);
			break;
		case 2:
			T = 4.50 * Q;
			printf("Total: R$ %.2f\n", T);
			break;
		case 3:
			T = 5.00 * Q;
			printf("Total: R$ %.2f\n", T);
			break;
		case 4:
			T = 2.00 * Q;
			printf("Total: R$ %.2f\n", T);
			break;
		case 5:
			T = 1.50 * Q;
			printf("Total: R$ %.2f\n", T);
			break;
	}
	
	return 0;
}
