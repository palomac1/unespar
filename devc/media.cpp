#include<stdlib.h>
#include<stdio.h>
main(){
	float n1,n2,n3,media;
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	printf("Insira a segunda nota: ");	
	scanf("%f", &n2);
	printf("Insira a terceira nota: ");	
	scanf("%f", &n3);
	media = (n1+n2+n3)/3;
	printf("Media: %f \n", media);
}

