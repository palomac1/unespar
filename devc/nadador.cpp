#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
 int idade;

	printf("Insira a idade do nadador: ");
	scanf("%i",&idade);
	printf("\n");
	
	if(idade <5)
	 printf("Sem classificacao");
	  else if (idade <=7)
	     printf("Infantil A");
	     else if (idade <=10)
	        printf("Infantil B");
			  else if (idade <=13)
	           printf("Juvenil A");
	            else if (idade <=17)
	             printf("Juvenil B");
	              else if (idade >=18)
	               printf("Senior");
}
	
