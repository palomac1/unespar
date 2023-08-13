//EX 5
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char palavra[50];
    int verificador = 0;

    printf("Digite uma palavra: ");
    gets(palavra);

    for(int i = 0; i < strlen(palavra); i++){
        if(palavra[i] == palavra[strlen(palavra) -1 -i]){
            verificador++;
        }else{
            verificador = 0;
        }
    }

    if(verificador == strlen(palavra)){
        printf("A palavra %s e um palindromo\n", palavra);
    }else{
        printf("A palavra %s nao e um palindromo\n", palavra);
    }
}
