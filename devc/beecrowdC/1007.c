#include <stdio.h>
 
int main() {
    
    int A, B, C, D;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    
    int dif = (A*B) - (C*D);
    
    printf("DIFERENCA = %d\n", dif);
 
    return 0;
}