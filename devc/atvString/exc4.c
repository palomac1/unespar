#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char frase[80];

    printf("Digite uma frase: ");
    gets(frase);

    for(int i = 0; i < strlen(frase); i++){
        if(toupper(frase[i]) == toupper('a') || toupper(frase[i]) == toupper('e') || toupper(frase[i]) == toupper('i') || toupper(frase[i]) == toupper('o') || toupper(frase[i]) == toupper('u')){
            frase[i] = '*';
        }
    }

    for(int i = 0; i< strlen(frase); i++){
        printf("%c", toupper(frase[i]));

        if(i == strlen(frase) - 1) printf("\n");
    }
}