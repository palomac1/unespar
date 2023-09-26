#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	void mediat(float nota1, float nota2,float nota3, char letra, float *media){	
	if(letra == 'A'){
		*media = (nota1 + nota2 + nota3)/3; 
	} else { 
		*media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
	}
} 
	int main(){
		float nota1, nota2, nota3, media;
		char letra;
		printf("Digite a nota 1: \n");
		scanf("%f", &nota1);
		printf("Digite a nota 2: \n");
		scanf("%f", &nota2);
		printf("Digite a nota 3: \n");
		scanf("%f", &nota3);
		fflush(stdin);
		printf("Digite a letra: \n");
		scanf("%c", &letra);
		mediat(nota1, nota2, nota3, letra, &media);
	
		printf("A media do aluno e: %.2f \n", media);
		
		return 0;
	}