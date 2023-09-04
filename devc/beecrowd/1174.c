#include <stdio.h>
int main()
{
    int n[10],i,d;
    
        printf("Insira um valor: \n");
        scanf("%d",&d);
    
        
    for(i=0; i<=9; i++)
    {
        n[i] = d;
        printf("X[%d] = %d\n",i,d);
        d * =2;
    }
        
}