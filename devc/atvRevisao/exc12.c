#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade;
    float peso, altura;
    float soma = 0;
    int cont = 0;
    int cont2 = 0;
    int cont3 = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);

        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);

        soma = soma + idade;

        if(peso > 90 && altura < 1.50){
            cont++;
        }

        if(altura > 1.90){
            cont2++;
        }

        if(altura > 1.90 && idade >= 10 && idade < 30){
            cont3++;
        }
    }

    if(cont2 == 0){
        cont2 = 1;
    }

    float porcentagem = (cont3 * 100) / cont2;

    printf("Media: %.2f\n", soma / 10.0);
    printf("Quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1,50: %d\n", cont);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90.: %.2f", porcentagem);
}