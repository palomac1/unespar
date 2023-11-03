#include<stdio.h>
#include<stdlib.h>

	struct Bolsa{
		char nome[20];
		char area[20];
		float valorAcao;
		float valorAnt;
		float variacao;
	}; typedef struct Bolsa bolsa;

    void alteraValor(bolsa acoes[], int numAcoes, float novoValor) {
    for (int i = 0; i < numAcoes; i++) {
        acoes[i].valorAnt = acoes[i].valorAcao;
        acoes[i].valorAcao = novoValor;
        acoes[i].variacao = ((acoes[i].valorAnt - acoes[i].valorAcao) / acoes[i].valorAnt) * 100;
    }
}

int main(){
	bolsa b[3];
	float valor, novoValor;
	
	for(int i = 0; i < 3; i++){
	printf("\nDigite o nome da compania: ");
	scanf("%s", &b[i].nome);
	printf("Digite a area de atuacao da compania: ");
	scanf("%s", &b[i].area);
	printf("Digite o valor atual de acao da compania: ");
	scanf("%f", &b[i].valorAcao);
	printf("Digite o valor antigo de acao da compania: ");
	scanf("%f", &b[i].valorAnt);
	
	b[i].variacao = (b[i].valorAnt * 100)/b[i].valorAcao;
}
	printf("\nDigite o valor da acao que voce quer investir: \n");
	scanf("%f", &valor);
	
	for(int i = 0; i < 3; i++){
	 if(valor > b[i].valorAcao){
		printf("\nO nome da compania e: %s \n", b[i].nome);
		printf("A area de atuacao da compania e: %s \n", b[i].area);
		printf("O valor atual da acao e: %.1f \n", b[i].valorAcao);
		printf("O valor anterior da acao e: %.1f \n", b[i].valorAnt);
		printf("A variacao da acao em porcentagem: %.1f%% \n", b[i].variacao);
	 }
    }

    printf("\nDigite um novo valor para as acoes: \n");
    scanf("%f", &novoValor);

    alteraValor(b, 3, novoValor);

    printf("\nNovos valores das acoes: \n");
    for(int i = 0; i < 3; i++){
        printf("\nO nome da compania e: %s \n", b[i].nome);
		printf("A area de atuacao da compania e: %s \n", b[i].area);
		printf("O valor atual da acao e: %.1f \n", b[i].valorAcao);
		printf("O valor anterior da acao e: %.1f \n", b[i].valorAnt);
		printf("A variacao da acao em porcentagem: %.1f%% \n", b[i].variacao);
    }

    return 0;
}