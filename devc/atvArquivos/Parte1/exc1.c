#include<stdio.h>
#include<stdlib.h>
#include<string.h>

	int main(){
		FILE *arq;
		char caractere;
		arq = fopen("arq.txt", "w");
		
		if(arq == NULL){
			printf("Erro na abertura de arquivo");
	}
	
	do{
		printf("Digite uma letra: ");
		fflush(stdin);
		scanf("%c", &caractere);
	    fputc(caractere, arq);
	}
	while(caractere != '0');
	fclose(arq);
	
		arq = fopen("arq.txt", "r");
		
		if(arq == NULL){
			printf("Erro na abertura do arquivo");
		}	
		arq = fopen("arq.txt", "r");
	
	while((caractere = fgetc(arq)) != EOF){
		printf("%c", caractere);
		printf("\n");
	}
	
	fclose(arq);		
}