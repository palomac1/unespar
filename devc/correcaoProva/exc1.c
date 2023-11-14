#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void conta(int A[], int B[]){
    for(int i = 0; i < 10; i++){
        B[i] = pow(A[i], 3);
    }
}

int main(){
    int A[10];
    int B[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    conta(A, B);

    for(int i = 0; i < 10; i++){
        printf("%d", B[i]);
    }
}