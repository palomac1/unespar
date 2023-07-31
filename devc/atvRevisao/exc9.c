#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
    int X,Y;

	printf("Insira o preço do produto: ");
	scanf("%d",&Y);
	printf("Insira o codigo de origem do produto: ");
	scanf("%d",&X);
	printf("\n");
	
	 if (X==1)
	       printf("NORTE\n");
	    else
	       if (X==2)
	          printf("NORDESTE\n");
	          else
	       if (X==3)
	          printf("SUDESTE\n");
	          else
	       if (X==4)
	          printf("SUL\n");
	          else
	       if (X==5)
	          printf("CENTRO-OESTE\n");
	       else
	          printf("CODIGO NAO CADASTRADO\n");
}