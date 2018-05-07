#include <stdio.h>

int main() {
	
	int inter, gremio, i, vInter=0, vGremio=0, empate=0, grenais=0;
	
	do{
		scanf("%d%d", &inter, &gremio);
		
		if(inter>gremio){
			vInter++;
		}
		if(gremio>inter){
			vGremio++;
		}
		if(inter == gremio || gremio == inter){
			empate++;
		}
		
		grenais++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &i);
		
	}while(i!=2);
	
	printf("%d grenais\n", grenais);
	printf("Inter:%d\n", vInter);
	printf("Gremio:%d\n", vGremio);
	printf("Empates:%d\n", empate);
	if(vInter>vGremio){
		printf("Inter venceu mais\n");
	}
	if(vGremio>vInter){
		printf("Gremio venceu mais\n");
	}
	if(vInter == vGremio || vGremio == vInter){
		printf("Nao ouve vencedor\n");
	}
	
	return 0;
}
