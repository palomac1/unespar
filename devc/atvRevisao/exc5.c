#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
    float cache, preco_convite, qtidade, qtidade_convite;

   printf("Digite o valor do cache R$ ");
   scanf("%f",&cache);
   printf("Digite o preco do convite R$ ");
   scanf("%f",&preco_convite);
   
   qtidade_convite=cache/preco_convite;

   printf("Devem ser vendidos %.0f convites, para pelo menos atingir o custo do cache ", qtidade_convite);
}