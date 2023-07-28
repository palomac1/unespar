#include<math.h>
#include<stdlib.h>
#include<stdio.h>
main(){
    float salario,aumento;
	printf("Insira o valor atual do salario: ");
	scanf("%f",&salario);
	printf("Insira o percentual de aumento: ");
	scanf("%f",&aumento);
	aumento=salario*aumento;
	salario=salario+aumento;
	printf("O valor do salario final eh: %f e do aumento eh de: %f \n", salario, aumento);
}
