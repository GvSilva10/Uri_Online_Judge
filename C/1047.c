#include <stdio.h>

int main(){
	
	int hIn, hFim, minI, minF;
	scanf("%d%d%d%d", &hIn, &minI, &hFim, minF);
	
	if(hIn<hFim){
		if(minI<minF){
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hFim-hIn, minF-minI);
		}
	}
	if(hFim<hIn){
		printf("O JOGO DUROU %d HORA(S)\n",(24-hIn) + hFim);
	}
	if((hFim==hIn) || (hIn==hFim)){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	
	return 0;
}
