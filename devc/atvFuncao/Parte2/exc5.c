#include <stdio.h>
#include<stdlib.h>

void mat(int mat[3][4],int vet[12]){
    int i, j, cont=0;
    for (i=0;i<3;i++){ 
        for (j=0;j<4;j++){
            scanf("%d",&mat[i][j]);
            vet[cont++] = mat[i][j];
            
        }
    }

    printf("Valores passados para vetor: ");
    for (i=0;i<12;i++){
        printf("%d ",vet[i]);
    }
}
  
int main(){
    int mat[3][4];
    int vet[12];
    mat(mat,vet);
}