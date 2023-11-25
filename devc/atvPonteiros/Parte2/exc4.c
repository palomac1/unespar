#include <stdlib.h>
#include <stdio.h>

void ordenar(int *x, int *y, int *z) {
    int temp;

    //x = menor
    if (*y < *x) {
        temp = *y;
        *y = *x;
        *x = temp;
    }

    //z = maior
    if (*z < *x) {
        temp = *z;
        *z = *x;
        *x = temp;
    }

    //y = meio
    if (*z < *y) {
        temp = *z;
        *z = *y;
        *y = temp;
    }
}

int main() {
    int x, y, z;

    printf("Digite 3 numeros inteiros: \n");
    scanf("%d %d %d", &x, &y, &z);

    ordenar(&x, &y, &z);

    printf("Valores ordenados: %d, %d, %d\n", x, y, z);

    return 0;
}
