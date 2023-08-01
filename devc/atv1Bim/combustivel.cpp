#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
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
  


