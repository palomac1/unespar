#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
	int valor,n100,n50,n20,n10,n5,n2,n1;

	printf("Insira o valor que deseja \n: ");
	scanf("%i",&valor);
	
	n100 = valor/100;
	valor = valor % 100; //Resto
	n50 = valor/50;
	valor = valor % 50;
	n20 = valor/20;
	valor = valor % 20;
	n10 = valor/10;
	valor = valor % 10;
	n5= valor/5;
	valor = valor % 5;
	n2 = valor/2;
	n1 = valor % 2;
	
	printf("%i \n",valor);

	printf("%i nota(s) de R$ 100,00\n",n100);
	
	printf("%i nota(s) de R$ 50,00\n",n50);
	
	printf("%i nota(s) de R$ 20,00\n",n20);
	
	printf("%i nota(s) de R$ 10,00\n",n10);
	
	printf("%i nota(s) de R$ 5,00\n",n5);
	
	printf("%i nota(s) de R$ 2,00\n",n2);
	
	printf("%i nota(s) de R$ 1,00\n",n1);

}
