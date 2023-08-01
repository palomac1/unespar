#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){  
	int cat1,cat2,hip;
	
	printf("HIPOTENUSA \n \n");
	
	printf("Informe o valor do primeiro cateto: ");
	scanf("%i",&cat1);
	
	printf("Informe o valor do segundo cateto: ");
	scanf("%i",&cat2);
	
	hip = pow(cat1, 2) + pow(cat2, 2);
	hip = sqrt(hip);
	printf("Valor da hipotenusa: %i \n", hip);
		
}


