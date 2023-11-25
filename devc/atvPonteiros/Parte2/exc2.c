#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SomaDobro(int *a,int *b, int *dobro){
    *a = pow(*a, 2);
    *b = pow(*b, 2);
    *dobro = *a + *b;
}

int main(){
    int a, b, dobro;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d",&a,&b);

    SomaDobro(&a, &b, &dobro);
    printf("\nValor de A: %d \nValor de B: %d \n", a, b);
    printf("Valor da soma: %d", dobro);

    return 0;
}