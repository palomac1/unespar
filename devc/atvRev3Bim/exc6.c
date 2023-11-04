#include <stdio.h>

struct Habitante {
    char sexo;
    char corOlhos[30];
    char corCabelos[30];
    int idade;
};

void caracHab(struct Habitante h[], int num_hab) {
    for (int i = 0; i < num_hab; i++) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &h[i].sexo);
        printf("Digite a cor dos olhos (A/C): ");
        scanf(" %s", &h[i].corOlhos);
        printf("Digite a cor dos cabelos (L/P/C): ");
        scanf(" %s", &h[i].corCabelos);
        printf("Digite a idade: ");
        scanf("%d", &h[i].idade);
        printf("\n");
    }
}

float media_OlhosC_CabelosP(struct Habitante h[], int num_hab) {
    int soma_idades = 0;
    int cont = 0;
    
    for (int i = 0; i < num_hab; i++) {
        if (h[i].corOlhos == 'C' && h[i].corCabelos == 'P') {
            soma_idades += h[i].idade;
            cont++;
        }
    }
    
    if (cont > 0) {
        return (float)soma_idades/cont;
    } else {
        return 0.0; 
    }
}

int maiorIdade(struct Habitante h[], int num_hab) {
    int maior = h[0].idade;
    for (int i = 1; i < num_hab; i++) {
        if (h[i].idade > maior) {
            maior = h[i].idade;
        }
    }
    return maior;
}

int mulheres_OlhosA_CabelosL(struct Habitante h[], int num_hab) {
    int cont = 0;
    
    for (int i = 0; i < num_hab; i++) {
        if (h[i].sexo == 'F' && h[i].idade >= 18 && h[i].idade <= 35 && h[i].cor_olhos == 'A' && h[i].cor_cabelos == 'L') {
            cont++;
        }
    }
    
    return cont;
}

int main() {
    int num_habitantes;

    printf("Quantos habitantes deseja inserir? ");
    scanf("%d", &num_habitantes);

    struct Habitante h[num_habitantes];

    caracHab(h, num_habitantes);

    // printf("\nDados dos habitantes:\n");
    // for (int i = 0; i < num_habitantes; i++) {
    //     printf("Habitante %d: Sexo: %c, Cor dos olhos: %c, Cor dos cabelos: %c, Idade: %d\n",
    //            i + 1, h[i].sexo, h[i].corOlhos, h[i].corCabelos, h[i].idade);
    // }

    float media = media_OlhosC_CabelosP(h, num_habitantes);
    printf("Média de idade das pessoas com olhos castanhos e cabelos pretos: %.2f\n", media);

    int maior = maiorIdade(h, num_habitantes);
    printf("Maior idade: %d\n", maior);

    int cont = mulheres_OlhosA_CabelosL(h, num_habitantes);
    printf("Quantidade de mulheres com idade entre 18 e 35 anos, olhos azuis e cabelos louros: %d\n", cont);

    return 0;
}
