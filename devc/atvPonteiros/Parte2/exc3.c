#include <stdlib.h>
#include <stdio.h>
int main(){
    float numeros[10];

    for(int i = 0; i < 10; i++){
        printf("%p ", &numeros[i]);
    }
    printf("\n");
}

