#include <stdio.h>

int main() {
    int A1, A2, A3;
    int menorAndar;

    scanf("%d%d%d", &A1, &A2, &A3);

    if (A1 <= A2 && A1 <= A3)
        menorAndar = A1;
    else if (A2 <= A1 && A2 <= A3)
        menorAndar = A2;
    else
        menorAndar = A3;

    int tempoTotal = menorAndar * 2 + (A1 + A2 + A3 - 3 * menorAndar) * 2;

    // n deu certo
    printf("%d\n", tempoTotal);

    return 0;
}
