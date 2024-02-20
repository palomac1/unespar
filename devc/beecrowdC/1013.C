#include <stdio.h>

int main() {
 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int maior = (a + b + abs(a-b))/2;
    int maiorABC = (maior + c + abs(maior -c))/2;
    
    printf("%d eh o maior\n", maiorABC);
    
    return 0;
}