#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Opera��es matem�ticas
main(){
	int x;
	
	printf("Insira um valor: ");
	scanf("%i",&x);
	
	if((x % 3) == 0){
		printf("%i e multiplo de 3", x);
	}else{
		printf("%i nao e multiplo de 3", x);	
	}
}

