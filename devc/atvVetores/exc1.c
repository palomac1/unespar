//ARRUMAR
#include<stdlib.h>
#include<stdio.h>
#include<math.h> 
int main(){
    int numero[9];

    for (int i=0;i<9;i++){
        scanf("%d",&numero[i]);
    }
    
    for (int i=0;i<9;i++){
        if (numero[i] % 2 == 0){
            printf("Valor: %d\n",numero[i]);
            printf("Indice: %d\n",i);           
        }
    }
}