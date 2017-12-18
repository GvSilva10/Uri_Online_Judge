#include <stdio.h>
#include <math.h>

int main(){
	
	double A, B, C, aux;
	scanf("%lf%lf%lf", &A, &B, &C);
	
	if(A < B){
        aux = A;
        A = B;
        B = aux;
    }

    if(B < C){
        aux = B;
        B = C;
        C = aux;
    }

    if(A < B){
        aux = A;
        A = B;
        B = aux;
   	}
	
	if(A>= B+C){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	if(pow(A,2) == pow(B,2)+pow(C,2)){
		printf("TRIANGULO RETANGULO\n");
	}
	if(pow(A,2) > pow(B,2)+pow(C,2)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if(pow(A,2) < pow(B,2)+pow(C,2)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(A==B && A==C && B==C){
		printf("TRIANGULO EQUILATERO\n");
	}
	if((A==B && A!=C) || (A==B && B!=C) || (B==C && A!=C)){
		printf("TRIANGULO ISOSCELES\n");
	}
	
	
	return 0;
}
