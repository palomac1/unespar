#include<stdlib.h>
#include<stdio.h>
main(){
	int seg,h,m,s,resto;
	printf("Valor do tempo em segundos: ");
	scanf("%i", &seg);
	h = seg/3600;
	resto  = seg%3600; //Resto da div.
	m = resto/60;
	s = resto%60;
	printf("%i horas, %i minutos, %i segundos", h,m,s);
}

