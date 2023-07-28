#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
	float x, y;
	
	 x= 2;
	 y= sqrt(x);
	 printf("Raiz quadrada = %f \n", y);
	 
	 x= 5;
	 y= pow(x, 3);
	 printf("Potencia = %f \n", y);
	 
	 x=1024;
	 y = log2(x);
	 printf("Log na base 2 = %f \n", y);
	 
	 x=1000;
	 y= log(x);
	 printf("Logaritmo natural = %f \n", y);
	 
	 system("pause");
}
	 
