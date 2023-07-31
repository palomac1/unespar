#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
	float x, y, z, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f",&x);

	printf("Insira a segunda nota: ");
	scanf("%f",&y);
	
	printf("Insira a terceira nota: ");
	scanf("%f",&z);
	
	media = ((3*x)+(2*y)+(4*z))/(3+2+4);
	
		printf("O aluno teve media %f:", media);
}