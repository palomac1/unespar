#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;

    int *p = &x;
    int *c = &y;

    printf("Digite um valor inteiro para X: ");
    scanf("%d", &x);
    printf("Digite um valor inteiro de Y: ");
    scanf("%d", &y);

    if(x > y){
        printf("O endereco X: %d e maior com valor de: %d", &x, x);
    } else{
        printf("O endereco Y: %d e maior com valor de %d", &y,y);
    }

    return 0;
}