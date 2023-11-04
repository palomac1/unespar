#include<stdio.h>
#include<stdlib.h>

	struct Frota{
		char fabricante[30];
		char modelo[30];
		char placa[20];
		char tipoComb[30];
		float autonomia;
	}; typedef struct Frota frota;

	float calculaCombustivel(float dist, float consumoPorKm) {
	    return dist * consumoPorKm;
	}
	
	int calculaTanque(float dist, float autonomia) {
	    return (int)(dist / autonomia) + 1; // Arredonda para cima
	}

int main(){
	int numCarros;
	
	printf("Digite quantos carros deseja registrar (limite de 30): \n");
	scanf("%d", &numCarros);
	frota f[numCarros];
	
	for(int i = 0; i < numCarros; i++){
	printf("\nDigite o fabricante do carro: ");
	scanf("%s", &f[i].fabricante);
	printf("Digite o modelo do carro: ");
	scanf("%s", &f[i].modelo);
	printf("Digite a placa do carro: ");
	scanf("%s", &f[i].placa);
	printf("Digite o tipo de combustivel: ");
	scanf("%s", &f[i].tipoComb);
	printf("Digite a autonomia (Km por tanque cheio): ");
	scanf("%f", &f[i].autonomia);
}

    printf("\nDados dos Carros:\n");
    for (int i = 0; i < numCarros; i++) {
        printf("Fabricante: %s\n", f[i].fabricante);
        printf("Modelo: %s\n", f[i].modelo);
        printf("Placa: %s\n", f[i].placa);
        printf("Tipo de Combustível: %s\n", f[i].tipoComb);
        printf("Autonomia: %f\n", f[i].autonomia);
        
        float dist;
        printf("\nDigite a distancia da viagem em km: ");
        scanf("%f", &dist);

        float valorGasto = calculaCombustivel(dist, 1.0 / f[i].autonomia);
        printf("\nValor gasto em combustivel para uma viagem de %.1f km: R$%.3f\n", dist, valorGasto);

        float distPercorrer;
        printf("\nDigite a distancia que deseja percorrer em km: ");
        scanf("%f", &distPercorrer);

        int tanquesNec = calculaTanque(distPercorrer, f[i].autonomia);
        printf("Tanques necessarios para percorrer %f km: %d\n", distPercorrer, tanquesNec);
    	}
    	
    	return 0;
	}
	
