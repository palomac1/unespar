#include<stdio.h>
#include<stdlib.h>

	struct professor{
		int codigo;
		char sexo;
		float horas;
		float salariob;
		float desconto;
		float salariol;
	};
		
	typedef struct professor Professor;

int main(){
    Professor p[2]; 
    int contm, contf;
    
	for(int i = 0; i < 2; i++){
		printf("Digite o codigo do professor: \n");
		scanf("%d", &p[i].codigo);
		fflush(stdin);
		printf("Digite o sexo do professor M para masculino e F para feminino: \n");
		scanf("%s", &p[i].sexo);
		printf("Digite as horas que os professores trabalharam: \n");
		scanf("%f", &p[i].horas);	
        printf("\n");
	}

    float X=0, Y=0;

	for(int i = 0; i < 2; i++){
		 p[i].salariob = p[i].horas * 60.5;
		if(p[i].horas < 70){
		 p[i].desconto = (p[i].salariob * 8/100); 
		 p[i].salariol = p[i].salariob - p[i].desconto;
		} else {
		 p[i].desconto = (p[i].salariob * 5/100);
		 p[i].salariol = p[i].salariob - p[i].desconto;
		}

        if(p[i].sexo == 'M'){
           X += p[i].salariob;
           contm++;
        }else{
           Y += p[i].salariob;
           contf++;
        }
     printf("\n");

	}

    printf("Media aritmetica do salario bruto dos professores: %f\n", X/contm);
    printf("Media aritmetica do salario bruto das professoras: %f\n", Y/contf);
    printf("\n");

	for(int i = 0; i < 2; i++){
		printf("Codigo do professor: %d\n",p[i].codigo);
		printf("Salario bruto do professor: %.2f\n",p[i].salariob);
		printf("Desconto do professor: %.2f\n", p[i].desconto);
		printf("Salario liquido do professor: %.2f\n",p[i].salariol);
		printf("\n");
	}	
}