#include<stdlib.h>
#include<stdio.h>
main(){
	float preco,desc;
	printf("Insira o valor do produto: ");
	scanf("%f",&preco);
	desc=preco*0.15;
	preco=preco-desc;
	printf("Valor final: %f \n", preco);
	system("pause");
}
