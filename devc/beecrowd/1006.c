#include <stdio.h>

int main(){
    double n1,n2,n3;

    printf("Insira a primeira nota: \n");
    scanf("%f", &n1);
    
    printf("Insira a segunda nota: \n");
    scanf("%f", &n2);

    printf("Insira a terceira nota: \n");
    scanf("%f", &n3);
    
    media = (n1*2 + n2*3 + n3*5) /10;
    
    printf("MEDIA = %.5f\n",media);
}