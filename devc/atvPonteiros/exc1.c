#include <stdio.h>
#include <stdlib.h>

int main(){
    int cod = 3;
    float nota = 10;
    char nome = 'p';

    int *c = &cod;;
    float *n = &nota;
    char *p = &nome;
    
    printf("Valores antes da modificacao: \n");
    printf("%d\n", cod);
    printf("%.1f\n", nota);
    printf("%c\n", nome);

    *c = 4;
    *n = 9;
    *p = 'd';

    printf("\nValores depois da modificacao: \n");
    printf("\n%d\n", cod);
    printf("%.1f\n", nota);
    printf("%c", nome);
}