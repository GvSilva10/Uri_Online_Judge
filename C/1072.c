#include <stdio.h>

int main () {
	int n,x,i,fora=0,dentro=0;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &x);
		
		if(x>=10 && x<=20){
			dentro++;
		}
		else{
			fora++;
		}
	}
	
	printf("%d in\n%d out\n", dentro, fora);
	
	return 0;
}
