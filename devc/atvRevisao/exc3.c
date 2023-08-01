#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
    float raio, area;
    
    printf("Insira o valor do raio: ");
    scanf("%f",&raio);
    area = 3.14*raio*raio; //M_PI * pow(raio, 2);
    
    printf("Area do circulo = %.2f \n", area);
}