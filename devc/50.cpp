#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
	int x, dobro, metade;
	
	printf("Insira um valor: ");
	scanf("%i",&x);
	
	if (x > 50) { 
		metade = x/2;
		printf("Metade do valor: %i \n", metade);
	}else{
		dobro = x * 2;
		printf("Dobro do valor: %i", dobro);
	}
}


