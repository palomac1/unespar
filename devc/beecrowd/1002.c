#include <stdio.h>

int main(){

    float raio, area, n = 3.14159;

    printf("Insira o valor do raio:\n");
    scanf("%f", &raio);

    area = n * (raio*raio);

    printf("Area = %.2f", area);
    
}