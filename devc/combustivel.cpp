#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Opera��es matem�ticas
main(){
	float x, y, consumo;
	
	printf("GASTO MEDIO POR KM \n \n");
	
	printf("Informe a distancia em KM: ");
	scanf("%f",&x);
	
	printf("Informe o gasto total de combustivel: ");
	scanf("%f",&y);
	
	consumo = x/y;
	printf("Consumo medio por KM: %f \n", consumo);
		
}
  


