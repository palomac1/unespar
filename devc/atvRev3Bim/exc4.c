#include<stdio.h>
#include<stdlib.h>

	struct Livro{
		char nome[100];
		char editora[30];
		char isbn[13];
		int anoEdicao;
		int numPag;
        float preco;
	}; typedef struct Livro livro;

    int main(){
        livro l[5];
        double total_pag = 0;

        for(int i=0; i < 5; i++){
        	fflush(stdin);
            printf("Digite o nome do livro: ");
            gets(l[i].nome);
            fflush(stdin);
            printf("Digite o nome da editora: ");
            scanf("%s", &l[i].editora);
            printf("Digite o isbn: ");
            scanf("%s", &l[i].isbn);
            printf("Digite o ano de edicao: ");
            scanf("%d", &l[i].anoEdicao);
            printf("Digite o numero de paginas: ");
            scanf("%d", &l[i].numPag);
            total_pag += l[i].numPag;
            printf("Digite o preco: ");
            scanf("%f", &l[i].preco);
            printf("\n");
        }

        printf("Media do numero de paginas: %.2lf", total_pag/5);

        return 0;
    }