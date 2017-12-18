#include <stdio.h>

int main() {
	int n,i,cont=6;
	scanf("%d", &n);
	
	for(i=n; cont>0; i++){
		if(i%2 != 0){
			printf("%d\n", i);
			cont--;
		}
	}
	
	return 0;
}
