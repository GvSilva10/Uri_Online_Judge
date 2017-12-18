#include <stdio.h>

int main(){
	
	int N1,N2,N3,VA,VM,VB, aux;	
		
	scanf("%d%d%d", &N1, &N2, &N3);
	
	VA = N1;
	VM = N2;
	VB = N3;
	
	if(VA < VM){
		aux = VA;
		VA = VM;
		VM = aux;
	}
	if(VM < VB){
		aux = VM;
		VM = VB;
		VB = aux;
	}
	if(VA < VM){
		aux = VA;
		VA = VM;
		VM = aux;
	}
	
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", VB, VM, VA, N1, N2, N3);
	
	return 0;
}
