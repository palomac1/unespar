#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void produto(float valorAtual, float valorAntigo, float *percentual){	
    *percentual = (valorAtual - valorAntigo) * 100/valorAntigo;
} 

int main(){
		float valorAntigo, valorAtual, percentual;

        printf("Digite o valor atual desse produto: \n");
        scanf("%f", &valorAtual);
        printf("Digite o valor antigo desse produto: \n");
        scanf("%f", &valorAntigo);
        
        produto(valorAtual, valorAntigo, &percentual);

        printf("Valor do acrescimo: %.3f%% \n", percentual);

        return 0;
}