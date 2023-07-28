#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
	int x, y, res;
	
	printf("IMPAR OU PAR \n \n");
	
	printf("Insira quantos dedos Joao mostrou: " );
	scanf("%i",&x);
	printf("Insira quantos dedos Maria mostrou: ");
	scanf("%i",&y);
	printf("\n");
	res = x+y;
	
	if((res % 2) == 0){
		printf("O valor %i e par", res);
	}else{
		printf("O valor %i e impar", res);	
	}
}

