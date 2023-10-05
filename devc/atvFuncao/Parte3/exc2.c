#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	
	struct Funcionario{
		char nome[30];
		int idade;
		char sexo;
		char cpf[20];
		char datanasc[20];
		int codsetor;
		char cargo[30];
		int salario;
	};
	
	typedef struct Funcionario func;
	
	void Registro(func *f){
		 
		fflush(stdin);
			
		printf("Digite o nome do funcionario: \n");
		gets(f->nome);
		
		printf("Digite o cpf do funcionario: \n");
		gets(f->cpf);
		
		printf("Digite a data de nascimento do funcionario: \n");
		gets(f->datanasc);
		
		printf("Digite o cargo do funcionario: \n");
		gets(f->cargo);
		
		printf("Digite a idade do funcionario: \n");
		scanf("%d", &f->idade);
		
		fflush(stdin);
		
		printf("Digite o sexo(M ou F): \n");
		scanf("%c", &f->sexo);
		
		printf("Digite o codigo do setor: \n");
		scanf("%d", &f->codsetor);
		
		printf("Digite o salario do funcionario: \n");
		scanf("%d", &f->salario);
	}
	
	int main() {
		func funcionario;
		
		Registro(&funcionario);
			
		printf("\nNome: %s\n", funcionario.nome);
		printf("Idade: %d\n", funcionario.idade);
		printf("Sexo: %c\n", funcionario.sexo);
		printf("Cpf: %s\n", funcionario.cpf);
		printf("Data de nascimento: %s\n", funcionario.datanasc);
		printf("Codigo do setor: %d\n", funcionario.codsetor);
		printf("Cargo: %s\n", funcionario.cargo);
		printf("Salario: %d\n", funcionario.salario);
		
		}
	