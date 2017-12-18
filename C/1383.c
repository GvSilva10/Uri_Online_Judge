#include <stdio.h>

int main() {
	
	int entrada, n, matriz[9][9], coluna, linha;
	scanf("%d", &entrada);
	
	for(n=entrada; n>0; n--){
		
		for(coluna=1; coluna<=3; coluna++){
			for(linha=1; linha<=3; linha++){
				scanf("%d", &matriz[coluna][linha]);
			}
		}
		
		/*
		for(coluna=1; coluna<=3; coluna++){
			for(linha=1; linha<=3; linha++){
				printf("%d ", matriz[coluna][linha]);
			}
			printf("\n");
		}*/
	}
	return 0;
}
