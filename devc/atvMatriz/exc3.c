//EXC 3
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main(){
    int mat[3][4];
    int B[3][4];

    printf("Digite uma matriz 3x4:\n"); 
    for (int i=0;i<3;i++){ 
        for (int j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            if (mat[i][j] % 2 != 0) B[i][j] = mat[i][j] * 3; //Ímpar
            else B[i][j] = mat[i][j] * 2; //Par
        }
    }
    printf("\nNova matriz:\n");
    for (int i=0;i<3;i++){ 
        for (int j=0;j<4;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}