#include <stdio.h>
#include <stdlib.h>

float media3Provas(float nota1, float nota2, float nota3){
    return (nota1+nota2+nota3)/3;
}

float media2Provas(float nota1, float nota2, float nota3) {
    float minNota, media;

    if (nota1 < nota2) {
        minNota = nota1;
    } else {
        minNota = nota2;
    }

    if (nota3 < minNota) {
        minNota = nota3;
    }

    media = (nota1 + nota2 + nota3 - minNota) / 2;
    return media;
}

void notaAltaBaixa(float nota1, float nota2, float nota3, float *maisAlta, float *maisBaixa) {
    if (nota1 >= nota2 && nota1 >= nota3) {
        *maisAlta = nota1;
    } else if (nota2 >= nota1 && nota2 >= nota3) {
        *maisAlta = nota2;
    } else {
        *maisAlta = nota3;
    }

    if (nota1 <= nota2 && nota1 <= nota3) {
        *maisBaixa = nota1;
    } else if (nota2 <= nota1 && nota2 <= nota3) {
        *maisBaixa = nota2;
    } else {
        *maisBaixa = nota3;
    }
}

int main(){
    float nota1, nota2, nota3;
    double media3, media2;
    float nota_maisAlta, nota_maisBaixa;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);
    

    media3 = media3Provas(nota1, nota2, nota3);
    media2 = media2Provas(nota1, nota2, nota3);
    notaAltaBaixa(nota1, nota2, nota3, &nota_maisAlta, &nota_maisBaixa);

    printf("\nMedia com a nota das 3 provas: %.2f\n", media3);
    printf("Media com a nota das 2 provas: %.2f\n", media2);
    printf("Nota mais alta: %.2f\n",nota_maisAlta);
    printf("Nota mais baixa: %.2f\n", nota_maisBaixa);
}