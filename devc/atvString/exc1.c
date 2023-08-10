//EXC 1
#include <stdio.h>
#include <math.h>
#include<stdio.h>
int main() {
    char nome[5][50];
    
    for(int i = 0; i < 5; i++){
        printf("Digite um nome: ");
        gets(nome[i]);
    }
    printf("\n");
    printf("Nomes armazenados: \n");

    for(int i = 0; i < 5; i++){
        printf("%s\n", nome[i]);
    }
}