#include<stdlib.h>
#include<stdio.h>
#include<math.h> //Operações matemáticas
main(){
	float x, y, freq, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f",&x);

	printf("Insira a segunda nota: ");
	scanf("%f",&y);
	
	printf("Insira a frequencia: ");
	scanf("%f",&freq);
	
	media = (x+y)/2;
	
	if(media > 7 and freq >= 75){
		printf("O aluno foi aprovado com media %f:", media);
	}else{
		printf("O aluno foi reprovado com media %f:", media);	
	}
}
