#include <stdio.h>
#include <stdlib.h>

void valor(int *x, int *y){
    int z;
    if( *y > *x){
        z = *x;
        *x = *y;
        *y = z;
        printf("Conteudo das 2 variaveis apos a troca: %d e %d", *x, *y);
    } else if(*x == *y){
        printf("As variaveis tem o mesmo valor");
    } else{
        printf("Conteudo das 2 variaveis: %d e %d", *x, *y);
    }
}

int main(){
    int x, y;

    printf("Digite dois valores inteiros: \n");
    scanf("%d %d", &x, &y);

    valor(&x, &y);

    return 0;
}