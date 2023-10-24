#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct Aluno {
    int num;
    char nome[30];
    char curso[30];
    float nota1;
    float nota2;
};

typedef struct Aluno alune;

int main() {
    alune a[3];
    FILE *aluno;

    for (int i = 0; i < 3; i++) {
        printf("Digite o numero do aluno: \n");
        scanf("%d", &a[i].num);

        printf("Digite o nome do aluno: \n");
        scanf("%s", a[i].nome);

        // Cria o nome do arquivo com base no nome do aluno
        char NomeDoAluno[30];
        snprintf(NomeDoAluno, sizeof(NomeDoAluno), "%s.txt", a[i].nome);

        printf("Digite o curso do aluno: \n");
        scanf("%s", a[i].curso);

        printf("Digite a primeira nota do aluno: \n");
        scanf("%f", &a[i].nota1);

        printf("Digite a segunda nota do aluno: \n");
        scanf("%f", &a[i].nota2);

        aluno = fopen(NomeDoAluno, "w");

        if (aluno == NULL) {
            printf("Erro ao abrir o arquivo para o aluno %s\n", a[i].nome);
            return 1;
        }

        fprintf(aluno, "Número: %d\n", a[i].num);
        fprintf(aluno, "Nome: %s\n", a[i].nome);
        fprintf(aluno, "Curso: %s\n", a[i].curso);
        fprintf(aluno, "Nota 1: %.1f\n", a[i].nota1);
        fprintf(aluno, "Nota 2: %.1f\n", a[i].nota2);

        fclose(aluno);
    }

    return 0;
}
