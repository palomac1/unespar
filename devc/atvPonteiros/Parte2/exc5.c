#include <stdlib.h>
#include <stdio.h>

int main(){
    int a;

    printf("Digite um valor inteiro: "):
    scanf("%d", &a);

    int *B = &a;
    int *C = &a;
    int *D = &a;

    //Não usei pow pois retorna um double e estamos usando int nesse exc.
    *B = 2 * (*B);
    *C = 3 * (*C);
    *D = 4 * (*D);

    printf("Dobro: %d\n", *B);
    printf("Triplo: %d\n", *C);
    printf("Quádruplo: %d\n", *D);

    return 0;
}

