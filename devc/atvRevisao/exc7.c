#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
  float x, y, z, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f",&x);

	printf("Insira a segunda nota: ");
	scanf("%f",&y);
	
	printf("Insira a terceira nota: ");
	scanf("%f",&z);
	
    	media = (x+y+z)/3;
    	
    if (media >= 7) {
        printf("Aprovado");
    } else
    if (media >= 3){
        printf("EXAME! Deve tirar: %.2f no exame", (7.0 - media));
    } else
        printf(“Reprovado”);
}