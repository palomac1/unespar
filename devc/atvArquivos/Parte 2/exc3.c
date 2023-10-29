#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq1, *arq2, *arq3;
	char nomeArq1[30], nomeArq2[30], nomeArq3[30];
	char caractere;
	
	printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", &nomeArq1);
    
    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", &nomeArq2);

	arq1 = fopen(nomeArq1, "r");
    if (arq1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo.\n");
        return 1;
    }
    
    arq2 = fopen(nomeArq2, "r");
    if (arq2 == NULL) {
        printf("Erro ao abrir o segundo arquivo.\n");
        return 1;
    }
    
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArq3);

    arq3 = fopen(nomeArq3, "w");
    if (arq3 == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(arq1);
        fclose(arq2);
        return 1;
    }

    // Copia o conteúdo do primeiro arquivo para o terceiro
    while ((caractere = fgetc(arq1)) != EOF) {
        fputc(caractere, arq3);
    }

    // Copia o conteúdo do segundo arquivo para o terceiro
    while ((caractere = fgetc(arq2)) != EOF) {
        fputc(caractere, arq3);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    printf("Arquivos concatenados com sucesso.\n");

    return 0; 
}