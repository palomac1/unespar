//ARRUMAR
#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main() {
 float idade, peso, altura, cont, media, pessoas190, pessoas150;
 media=0;
 cont=0;
 pessoas190=0;
 pessoas150=0;

 printf ("DIGITE SUA IDADE:");
 scanf ("%f", &idade);
 while (idade>0)
 {
     printf ("DIGITE SUA ALTURA:");
     scanf ("%f", &altura);
     printf ("DIGITE SEU PESO:");
     scanf ("%f", &peso);
     if (peso>90 && altura<1.50)
     {
         pessoas150++;
     }
     if if (idade>10 && idade<30 && altura>1.90)
     {
         pessoas190++;
     }

     printf ("DIGITE SUA IDADE:");
     scanf ("%f", &idade);
     cont++;
 }
media=media/cont;

 printf ("\n A media de idade das pessoas é: %.2f", media);
 printf ("\n Quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50 metros:%.f", pessoas150);
 printf ("\n Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90:%.f", ((pessoas190/cont)*100));
}
