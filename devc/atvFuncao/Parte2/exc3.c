#include <stdio.h>

void somar_divisores(int num,int *soma){
    for (int i=1;i<=num;i++){
        if (num % i == 0){
            *soma += i;
            printf("%d ",i);
        }
    }

}

int main(){
    int valor,soma;

    printf("Um valor inteiro: ");
    scanf("%d",&valor);

    somar_divisores(valor,&soma);
    printf("\nSoma dos divisores: %d",soma);
}