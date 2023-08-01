#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
	float r, h, A, pi, lata, qtd, custo; //Área da circunferência
		
	printf("TINTA \n \n");
	
	printf("Informe o raio da circunferencia: ");
	scanf("%f",&r);
	printf("Informe a altura da circunferencia: ");
	scanf("%f",&h);
	pi=3.14;
	A =(pi*r*r)+(2*pi*r*h);
	printf("Area do cilindro: %f metros quadrados \n", A);
	
	lata = A/(5*3);
	qtd = ceil(lata);
	printf("Quantidade de latas: %f \n", qtd);
	
	custo = qtd*50;
	printf("Custo das latas: %f \n", custo);
	
}
