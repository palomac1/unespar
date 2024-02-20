#include <stdio.h>

int main() {
    int n, maior, velocidade;

    while (scanf("%d", &n) != EOF) {
        int vetor[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &vetor[i]);

        maior = vetor[0];
        for (int i = 1; i < n; i++) {
            if (vetor[i] > maior)
                maior = vetor[i];
        }

        if (maior < 10)
            printf("1\n");
        else if (maior >= 10 && maior < 20)
            printf("2\n");
        else if (maior >= 20)
            printf("3\n");
    }

    return 0;
}
