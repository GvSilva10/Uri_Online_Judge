#include <stdio.h>

int main(){
	
	int N, a, m, d;
	scanf("%d", &N);
	
	a = N/365;
	N = N%365;
	m = N/30;
	d = N%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
	
	return 0;
}
