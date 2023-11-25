#include <stdio.h>
#include <stdlib.h>

void medidas_retangulo(double *var1,double *var2){
    double area, per;
    area = (*var1) * (*var2);
    per = 2 * (*var1 + *var2);

    *var1 = area;
    *var2 = per;
}

int main(){
    double alt, base;

    printf("Digite a altura e a base do retangulo: \n");
    scanf("%lf %lf", &alt, &base);

    medidas_retangulo(&alt, &base);

    printf("\nArea do retangulo: %.2lf\nPerimetro do retangulo: %.2lf\n", alt, base);

    return 0;
}


