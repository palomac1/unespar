#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float salario = 545.00;
    float valor_a_ser_acrescentado = 0, valor_total_vendas = 0, valor_obj_mais_vendido = 0;
    int posicao = 0;
    float precos[10];
    int quantidade[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o preco do produto %d: ", i+1);
        scanf("%f", &precos[i]);
        
        printf("Informe a quantidade vendida do produto %d: ", i+1);
        scanf("%d", &quantidade[i]);     

        if(precos[i] > valor_obj_mais_vendido){
            posicao = i;
            valor_obj_mais_vendido = precos[i];
        }

        float valor_por_vendas = precos[i] * quantidade[i] * 0.05;

        valor_total_vendas += precos[i] * quantidade[i];
        valor_a_ser_acrescentado += valor_por_vendas;   
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("Produto %2d: quantidade: %2d| valor unitario: %.2f| valor: %5.2f|\n", i+1, quantidade[i], precos[i]/quantidade[i], precos[i]);
    }

    printf("\n");
    printf("Valor geral das vendas: %.2f\n", valor_total_vendas);
    printf("Valor da comissao a ser paga: %.2f\n", valor_a_ser_acrescentado);
    printf("O valor do produto mais vendido foi: %.2f e esta armazenado na posicao %d\n", precos[posicao], posicao);
}