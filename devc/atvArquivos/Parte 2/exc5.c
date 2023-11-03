#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	FILE *arq1, *arq2;
	int ano;
	char ArqEnt[20], ArqSaida[20];
	
	printf("Ano corrente: ");
	scanf("%d", &ano);
	
	fflush(stdin);
	
	printf("Digite o nome do arquivo de entrada: ");
	gets(ArqEnt);
	
	fflush(stdin);
	 
	arq1 = fopen(ArqEnt , "r");
	
	if(ArqEnt == NULL){
		printf("Erro ao abrir o arquivo");
		return 1;
	}
	
	printf("Digite o nome do arquivo de saida: ");
	gets(ArqSaida);
	
	arq2 = fopen(ArqSaida, "w");
	
	if(ArqSaida == NULL){
		printf("Erro ao abrir o arquivo");
		fclose(arq1);
		return 1;	
	}
	
	char nome[41];
	int idade;
	
	while (fscanf(arq1, "%40s %d", nome, &idade) != EOF) {
        int Idade = ano - idade;
        if(Idade < 18){
              	
        	fprintf(arq2, "%s %d %s \n", nome, Idade, "menor de idade");
        	
		} else
		if(Idade > 18){
        	
        	fprintf(arq2, "%s %d %s \n", nome, Idade, "maior de idade");
        	
		}else{
        
        	fprintf(arq2, "%s %d %s \n", nome, Idade, "entrando na maior idade");
        	
		}
    }
    
    fclose(arq1);
    fclose(arq2);
    
    return 0;
}