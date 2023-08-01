#include <stdio.h>
#include<stdlib.h>
#include<math.h> 
int main() {

    int arr[10];
    for (int i=0;i<10;i++){
        printf("Digite o %dº número: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nOs números digitados foram:\n");
    for (int k=0;k<10;k++){ 
        printf("%d\n",arr[k]);
    }
}