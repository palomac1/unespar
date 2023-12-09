#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char *frase, *frase_copia;
	int tamanho;
	
	printf("Insira o tamanho da frase: ");
	scanf("%d", &tamanho);
	setbuf(stdin ,NULL);

	
	frase = (char*) malloc(tamanho * sizeof(char));
	frase_copia = (char*)malloc(tamanho * sizeof(char));
	
	printf("Insira uma frase: ");
    fgets(frase, tamanho, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    
	strcpy(frase_copia, frase);
	
	printf("Frase original: %s\n", frase);
    printf("Copia da frase: %s\n", frase_copia);
	
	free(frase);
	free(frase_copia);

}