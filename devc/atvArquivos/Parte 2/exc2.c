#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arqEntrada;
    FILE *arqSaida;
    char nomeArqEntrada[100];
    char nomeArqSaida[100];
    char c;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", &nomeArqEntrada);

    arqEntrada = fopen(nomeArqEntrada, "r");

    if (arqEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", &nomeArqSaida);

    arqSaida = fopen(nomeArqSaida, "w");

    if (arqSaida == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    while((c = fgetc(arqEntrada)) != EOF){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            fputc('*', arqSaida);
        }
        else{
            fputc(c, arqSaida);
        }
    }

    fclose(arqEntrada);
    fclose(arqSaida);

    printf("Arquivo de saida criado com as vogais substituidas por '*'.\n");

    return 0;
}