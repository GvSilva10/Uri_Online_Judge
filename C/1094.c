#include <stdio.h>

int main() {
	
	int teste, quantia=0, total=0, totalC=0, totalS=0, totalR=0, i;
	float Pc, Ps, Pr;
	char tipo;
	
	scanf("%d", &teste);
	
	for(i=0; i<teste; i++){
		scanf("%d %c", &quantia, &tipo);
		
		if(tipo == 'C'){
			totalC = totalC + quantia;
			total = total + quantia;
		}
		if(tipo == 'S'){
			totalS = totalS + quantia;
			total = total + quantia;
		}
		if(tipo == 'R'){
			totalR = totalR + quantia;
			total = total + quantia;
		}
	}
	
	Pc = ((float)totalC * 100) / total;
	Ps = ((float)totalS * 100) / total;
	Pr = ((float)totalR * 100) / total;
	
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, totalC, totalR, totalS);
	printf("Percentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n", Pc, Pr, Ps);
	
	return 0;
}
