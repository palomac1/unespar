#include<stdlib.h>

void vetor(int vet[25]){
	for(int i = 0; i < 25; i++){
		if(vet[i] < 0){
			vet[i] = 0;
		}			
	}
}

int main(){
	int vet[25],valor;
        for(int i = 0; i < 25; i++){
		 printf("Digite os valores: \n");
		 scanf("%d", &vet[i]);   
		}	
         vetor(vet);
         for(int i = 0; i < 25; i++){
         printf("Valores: %d \n", vet[i]);
	}
}