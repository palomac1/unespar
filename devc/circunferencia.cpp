#include<stdlib.h>
#include<stdio.h>
main(){
	float r, pi, A, P;
	printf("Informe o raio da circunferencia: ");
	scanf("%f",&r);
	pi=3,14;
	A=pi*r*r;
	printf("AREA = %f \n", A);
	P=2*pi*r;
	printf("PERIMETRO = %f \n", P);
	system("pause");
}
