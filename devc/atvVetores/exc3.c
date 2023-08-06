#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int segundos = time(0);
    srand(segundos);
    int dado = rand() % 7;

    int valores_dados[20];
    int qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0, qtd6 = 0;

    for(int i = 0; i < 20; i++){
        dado = rand() % 7;

        if(dado == 0){
            dado++;
        }

        valores_dados[i] = dado;

        if(dado == 1)qtd1++;
        else if(dado == 2)qtd2++;
        else if(dado == 3)qtd3++;
        else if(dado == 4)qtd4++;
        else if(dado == 5)qtd5++;
        else if(dado == 6)qtd6++;
    }//for

    for(int i = 0; i < 20; i++){
        printf("%d\n", valores_dados[i]);
    }

    printf("Quantidade de dados com valor 1 = %d\n", qtd1);
    printf("Quantidade de dados com valor 2 = %d\n", qtd2);
    printf("Quantidade de dados com valor 3 = %d\n", qtd3);
    printf("Quantidade de dados com valor 4 = %d\n", qtd4);
    printf("Quantidade de dados com valor 5 = %d\n", qtd5);
    printf("Quantidade de dados com valor 6 = %d\n", qtd6);
}