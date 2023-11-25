#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * 3.14 * pow(R,2);
    *volume = (4/3) * 3.14 * pow(R,3);
}

int main(){
    float R, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &R);

    calc_esfera(R, &area, &volume);

    printf("\nArea da superficie: %.2f \nVolume da esfera: %.2f", area, volume);

    return 0;
}