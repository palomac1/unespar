#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int raiz(int num) {
    num = sqrt(num);
    return num;
}

int main() {
    int num;
    printf("Digite o numero: \n");
    scanf("%d", &num);
    int Raiz = raiz(num);
    printf("\n");
    printf("A raiz do numero colocado e: %.2d", Raiz);
}