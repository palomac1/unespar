#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
	float C, F;
	printf("CONVERTER TEMPERATURA DE CELSIUS PARA FAHRENHEIT \n \n");
	printf("Insira a temperatura em graus Celsius: ");
	scanf("%f",&C);
	F = (1.8*C)+32;
	printf("Temperatura em graus Fahrenheit: %f \n", F);
	system("pause");
}

