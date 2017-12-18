#include <stdio.h>
#include <math.h>

int main () {
	
	int d, vf, vg; 
	double x, rvf, rvg;
	
	while(scanf("%d%d%d", &d, &vf, &vg) != EOF){
		
		x = sqrt(144+(d*d));
		rvf = 12.0/ vf;
		rvg = x/vg;
		
		if(rvg>rvf){
			printf("N\n");
		}
		else {
			printf("S\n");
		}
	}	
	
	return 0;
}
