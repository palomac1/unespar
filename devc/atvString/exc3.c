//EXC 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char frase[50];
    int qtd_vogal = 0;

    printf("Informe uma frase: ");
    gets(frase);

    for(int i = 0; i < strlen(frase); i++){
        if(tolower(frase[i]) == tolower('a') || tolower(frase[i]) == tolower('e') || tolower(frase[i]) == tolower('i') || tolower(frase[i]) == tolower('o') || tolower(frase[i]) == tolower('u')){
            qtd_vogal++;
        }
    }

    printf("Quantidade de vogais: %d\n", qtd_vogal);
}

