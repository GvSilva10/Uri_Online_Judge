#include <stdio.h>
#include <math.h>

int main(){
	
	float N;
	int C;
	scanf("%f", &N);
	
	C = N/100;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100,00\n", C);
	N = fmodf(N, 100);
	C = N/50;
	printf("%d nota(s) de R$ 50,00\n", C);
	N = fmodf(N, 50);
	C = N/20;
	printf("%d nota(s) de R$ 20,00\n", C);
	N = fmodf(N, 20);
	C = N/10;
	printf("%d nota(s) de R$ 10,00\n", C);
	N = fmodf(N, 10);
	C = N/5;
	printf("%d nota(s) de R$ 5,00\n", C);
	N = fmodf(N, 5);
	C = N/2;
	printf("%d nota(s) de R$ 2,00\n", C);
	N = fmodf(N, 2);
	C = N/1;
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1,00\n", C);
	N = fmodf(N, 1);
	C = N/0.50;
	printf("%d moeda(s) de R$ 0,50\n", C);
	N = fmodf(N, 0.50);
	C = N/0.25;
	printf("%d moeda(s) de R$ 0,25\n", C);
	N = fmodf(N, 0.25);
	C = N/0.10;
	printf("%d moeda(s) de R$ 0,10\n", C);
	N = fmodf(N, 0.10);
	C = N/0.05;
	printf("%d moeda(s) de R$ 0,05\n", C);
	N = fmodf(N, 0.05);
	C = N/0.01;
	printf("%d moeda(s) de R$ 0,01\n", C);
	
	return 0;
}
