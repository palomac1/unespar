//EXC2
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char nome_arq[30];
    char caractere;
    int vogal = 0;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arq);

	FILE *arq; 
	arq = fopen(nome_arq,"r");

    if (arq == NULL) {
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arq)) != EOF) {
        caractere = tolower(caractere); 
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            vogal++;
        }
    }

    fclose(arq);

    printf("O numero de vogais e: %d\n", vogal);

    return 0;
}