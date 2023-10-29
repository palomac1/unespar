#include <stdlib.h>
#include <stdio.h>

int main(){

    char caracter, c, nomeArq[30];
    int cont = 0;

    printf("Digite o nome do arquivo que deseja abrir: \n");
    scanf("%s", &nomeArq);

    FILE *arq;
    fflush(stdin);

    printf("Digite um caracter: \n");
    scanf("%c", &caracter);

    arq = fopen(nomeArq, "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while((c = fgetc(arq)) != EOF){
        if(c == caracter){
            cont++;
        }
    }

    fclose(arq);

    printf("Tem %d caracteres iguais neste arquivo \n", cont);

}