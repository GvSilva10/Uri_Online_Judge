#include <stdio.h>

int main() {
	
	int n, i=1;
	
	scanf("%d", &n);
	
	while(n>0){
		if(i%4 == 0){
			printf("PUM\n");
			n--;
		}
		else{
			printf("%d ", i);
		}
		
		i++;
	}
	
	return 0;
}
