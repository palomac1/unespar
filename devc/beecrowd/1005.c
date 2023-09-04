#include <stdio.h>

int main(){
    float n1,n2,media;

    printf("Insira a primeira nota: \n");
    scanf("%f", &n1);
    
    printf("Insira a segunda nota: \n");
    scanf("%f", &n2);
    
    media = (n1*3.5 + n2*7.5) / (3.5+7.5);
    
    printf("MEDIA = %.2f\n",media);
}