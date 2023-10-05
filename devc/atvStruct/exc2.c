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
	
	void Registro(func *f, int x){
		
		for(int i = 0; i < x; i++){
		 
		fflush(stdin);
			
		printf("Digite o nome: \n");
		gets(f->nome);
		
		printf("Digite o cpf: \n");
		gets(f->cpf);
		
		printf("Digite a data de nascimento: \n");
		gets(f->datanasc);
		
		printf("Digite o cargo: \n");
		gets(f->cargo);
		
		printf("Digite a idade: \n");
		scanf("%d", &f->idade);
		
		fflush(stdin);
		
		printf("Digite o sexo(M ou F): \n");
		scanf("%c", &f->sexo);
		
		printf("Digite o codigo do setor: \n");
		scanf("%d", &f->codsetor);
		
		printf("Digite o salario: \n");
		scanf("%d", &f->salario);
	}
}
	
	int main() {
		func funcionario;
		int x;
		
		printf("Digite a quantidade de funcionarios: \n");
		scanf("%d", &x);
		
		setbuf(stdin, NULL);
		
		Registro(&funcionario, x);
		
		for(int i = 0; i < x; i++){
			
		printf("\nNome: %s\n", funcionario.nome);
		printf("Idade: %d\n", funcionario.idade);
		printf("Sexo: %c\n", funcionario.sexo);
		printf("Cpf: %s\n", funcionario.cpf);
		printf("Data de nascimento: %s\n", funcionario.datanasc);
		printf("Codigo do setor: %d\n", funcionario.codsetor);
		printf("Cargo: %s\n", funcionario.cargo);
		printf("Salario: %d\n", funcionario.salario);
		}
	}