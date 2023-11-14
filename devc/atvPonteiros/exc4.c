#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y, int z){
     z = *x;
     *x = *y;
     *y = z;
}

int main(){
    int x, y;

    printf("Digite um valor para X: ");
    scanf("%d", &x);
    printf("Digite um valor para Y: ");
    scanf("%d", &y);

    troca(&x, &y);

    printf("Valores depois da troca: \n");
    printf("Novo valor de X: %d", x).
    printf("Novo valor de Y: %d", y);

    return 0;
}