#include <stdio.h>
 
int main() {
 
    int N, X, totalC=0, totalR=0, totalS=0, cobaias=0;
    double percC=0, percR=0, percS=0;
    char animal;
    
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        scanf("%d %c", &X, &animal);

        cobaias += X;
        
        if(animal == 'C'){
            totalC += X;
        } else if(animal == 'R'){
            totalR += X;
        } else if(animal == 'S'){
            totalS += X;
        }
    }
    
    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2f %%\n", ((double)totalC * 100.0) / cobaias);
    printf("Percentual de ratos: %.2f %%\n", ((double)totalR * 100.0) / cobaias);
    printf("Percentual de sapos: %.2f %%\n", ((double)totalS * 100.0) / cobaias);
 
    return 0;
}
