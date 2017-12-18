#include <stdio.h>
#include <string.h>

int main(){
	
	char a[15];
	gets(a);
	
	if(strcmp(a,"vertebrado") == 0){
		gets(a);
		
		if(strcmp(a,"ave") == 0){
			gets(a);
			
			if(strcmp(a,"carnivoro") == 0){
				printf("aguia\n");
			}
			else if(strcmp(a,"onivoro") == 0){
				printf("pomba\n");
			}
			
		}
		else if(strcmp(a,"mamifero") == 0){
			gets(a);
			
			if(strcmp(a,"onivoro") == 0){
				printf("homem\n");
			}
			else if(strcmp(a,"herbivoro") == 0){
				printf("vaca\n");
			}
			
		}
	}
	else if(strcmp(a,"invertebrado") == 0){
		gets(a);
		
		if(strcmp(a,"inseto") == 0){
			gets(a);
			
			if(strcmp(a,"hematofago") == 0){
				printf("pulga\n");
			}
			else if(strcmp(a,"herbivoro") == 0){
				printf("lagarta\n");
			}
			
		}
		else if(strcmp(a,"anelideo") == 0){
			gets(a);
			
			if(strcmp(a,"hematofago") == 0){
				printf("sanguessuga\n");
			}
			else if(strcmp(a,"onivoro") == 0){
				printf("minhoca\n");
			}
			
		}
	}
	
	return 0;
}
