#include<stdio.h>
#include<stdlib.h>

int main(){
	int quantidade, notas[quantidade], media = 0;
	
	printf("Digite a quantidade de notas: \n");
	scanf("%d", &quantidade);
	
	int *array = (int *)malloc(quantidade * sizeof(int));
	
	printf("Digite os valores das notas:\n");
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &notas[i]);
        media += notas[i];
    }
    
    printf("Media das notas: %d", media / quantidade);
    
}