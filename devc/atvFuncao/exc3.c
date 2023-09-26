#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void fatorial(int n) {
    int i;
    for( i = 1; n > 1; n = n - 1){
    i = i * n;
    }

    printf("O fatorial desse numero e: %d ", i);
}

int main() {
    int n;
    printf("Digite o numero que sera fatorado: \n");
    scanf("%d", &n);

    fatorial(n);
    return 0;

}