#include <stdio.h>
int main()
{
    int n[20],i,j, temp;
    
    printf("Insira um valor: \n");
    scanf("%d",&n[i]);
    
        
    for(i=0; j=19; i<10; i++, j--)
    {
        temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }

    for(i = 0; i<20; i++){
            printf("N[%d] = %d\n", i, n[i]);
    }
 
}