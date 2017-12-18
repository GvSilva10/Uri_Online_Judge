#include <stdio.h>

int main() {
	
	int n, i;
	float m1, m2, m3, mf;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%f%f%f", &m1, &m2, &m3);
		mf = ((m1*2)+(m2*3)+(m3*5)) / (2+3+5);
		printf("%.1f\n", mf);
	}
	
	return 0;
}
