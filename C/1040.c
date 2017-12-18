#include <stdio.h>

int main(){
	
	float N1, N2, N3, N4, Media, NotaE, MediaF;
	scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
	
	Media = (N1*2+N2*3+N3*4+N4*1)/(2+3+4+1);
	printf("Media: %.1f\n", Media);
	
	if(Media >= 7){
		printf("Aluno aprovado.\n");
	}
	else if(Media >= 5 && Media <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &NotaE);
		
		printf("Nota do exame: %.1f\n", NotaE);
		MediaF = (Media + NotaE) / 2;
		
		if(MediaF >= 5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", MediaF);
		}
		else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", MediaF);
		}
	}
	else{
		printf("Aluno reprovado.\n");
	}
	
	return 0;
}
