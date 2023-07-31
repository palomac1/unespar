#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
    int x, y;
    
    printf("Insira o primeiro valor: ");
    scanf("%d",&x);
    printf("Insira o segundo valor: ");
    scanf("%d",&y);
    
    if(x>y){
        printf("O maior valor e %d", x);
    }else{
        printf("O maior valor e %d", y);
    }
}