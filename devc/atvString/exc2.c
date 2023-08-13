//EXC 2
#include <stdio.h>
#include <math.h>
#include<stdio.h>
int main() {
    char letra_musica[50];
    char letra;
    int ocorrencias[20];
    int qtd = 0, num = 0;

    printf("Informe o nome de uma musica: ");
    gets(letra_musica);

    printf("Informe uma letra: ");
    scanf("%c", &letra);

    for(int i = 0; i < strlen(letra_musica); i++){
        if(tolower(letra_musica[i]) == tolower(letra)){
            ocorrencias[num] = i;
            qtd++;
            num++;
        }
    }

    if(qtd > 0){
        for(int i = 0; i < qtd; i++){
            printf("Ocorrencia do caractere na posicao %d\n", ocorrencias[i]);
        }
    }else{
        printf("Caractere nao encontrado\n");
    }
}
