#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
    float racao, gato1, gato2;
    
    printf("Insira o peso do saco de racao em quilos: ");
    scanf("%f",&racao);
    printf("Quantas gramas por dia e fornecida ao gato 1?");
    scanf("%f",&gato1);
    printf("Quantas gramas por dia e fornecida ao gato 2?");
    scanf("%f",&gato2);
    
    racao = racao*1000;
    racao = racao-((gato1+gato2)*3);
    
    printf("Restara de racao apos 3 dias: %.2f", racao);
}
