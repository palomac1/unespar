//Desafio
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int Main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[100];
    int id_espacos[10];
    int qtd_espacos = 0, ultimo_espaco = 0, num = 0;
    printf("Digite seu nome completo: ");
    gets(nome);

    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] == ' '){
            qtd_espacos++;
            id_espacos[num] = i;
            ultimo_espaco = i;
            num++;
        }
    }

    for(int i = 0; i < strlen(nome); i++){
        if(i == 0){
            printf("%c", toupper(nome[i]));
        }
        
        else if(nome[i] == ' '){
            break;
        }

        else{
            printf("%c", nome[i]);
        }
    }

    printf(" ");

    for(int i = 0; i < qtd_espacos-1; i++){
        printf("%c. ", toupper(nome[id_espacos[i]+1]));
    }

    for(int i = ultimo_espaco+1; i < strlen(nome); i++){
        if(i == ultimo_espaco+1){
            printf("%c", toupper(nome[i]));
        }else{
            printf("%c", nome[i]);
        }

        if(i == strlen(nome)-1) printf("\n");
    }

}//main
