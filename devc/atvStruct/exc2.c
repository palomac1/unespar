#include<stdio.h>
#include<stdlib.h>

	struct habitantes{
		float salario;
		int idade;
		char sexo;
		int filhos;
		
	};
		
	typedef struct habitantes Habitantes;

int main(){
    Habitantes h[0];
    int i = 0, contf;
    float X;
        
	while(i != 1000){
		printf("Digite o salario da pessoa: \n");
		scanf("%f", &h[i].salario);

		printf("Digite a idade da pessoa: \n");
		scanf("%d", &h[i].idade);

        if(h[i].idade == 0) break;

		printf("Digite o sexo da pessoa: \n");
		scanf("%s", &h[i].sexo);

        printf("Digite a quantidade de filhos da pessoa: \n");
		scanf("%d", &h[i].filhos);

        printf("\n");
        i++;

        if(sexo == 'F' && salario < 300){
            X+= h[i].idade;
            contf++;
        }

        printf("Media da idade das mulheres %f", X/contf);
	}

   





	

   
}