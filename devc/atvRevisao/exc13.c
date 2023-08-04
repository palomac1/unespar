#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valor;

    printf("Digite o valor do carro: ");
    scanf("%f", &valor);


    float precoavista = valor - (valor * 0.05);

    float preco12parcelas = valor + (valor * 0.06);
    float parcela12parcelas = preco12parcelas / 12;

    float preco24parcelas = valor + (valor * 0.12);
    float parcela24parcelas = preco24parcelas / 24;

    float preco48parcelas = valor + (valor * 0.24);
    float parcela48parcelas = preco48parcelas / 48;

    float preco60parcelas = valor + (valor * 0.30);
    float parcela60parcelas = preco60parcelas / 60;

    printf("------A VISTA------\n");
    printf("Preco final: %.2f\n\n", precoavista);

    printf("------12 parcelas------\n");
    printf("Preco final: %.2f\n", preco12parcelas);
    printf("Valor da parcela: %.2f\n\n", parcela12parcelas);

    printf("------24 parcelas------\n");
    printf("Preco final: %.2f\n", preco24parcelas);
    printf("Valor da parcela: %.2f\n\n", parcela24parcelas);

    printf("------48 parcelas------\n");
    printf("Preco final: %.2f\n", preco48parcelas);
    printf("Valor da parcela: %.2f\n\n", parcela48parcelas);

    printf("------60 parcelas------\n");
    printf("Preco final: %.2f\n", preco60parcelas);
    printf("Valor da parcela: %.2f\n\n", parcela60parcelas);


}