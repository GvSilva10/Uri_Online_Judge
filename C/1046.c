#include <stdio.h>

int main(){
	
	int In, Fim;
	scanf("%d%d", &In, &Fim);
	
	if(In<Fim){
		printf("O JOGO DUROU %d HORA(S)\n", Fim-In);
	}
	if(Fim<In){
		printf("O JOGO DUROU %d HORA(S)\n",(24-In) + Fim);
	}
	if((Fim==In) || (In==Fim)){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	
	
	return 0;
}
