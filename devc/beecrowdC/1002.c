#include <stdio.h>
 
int main() {
 
    double raio;
    double n = 3.14159;
    
    scanf("%lf", &raio);

    double area = n * (raio * raio);    
    
    printf("A=%.4lf\n", area);
 
    return 0;
}