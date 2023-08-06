#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int ra[7];
    float media[7];
    float maior_media = 0;
    int indice_maior_ra = 0;

    for(int i = 0; i < 7; i++){
        printf("Informe o RA do aluno %d: ", i+1);
        scanf("%d", &ra[i]);

        printf("Informe a media do aluno %d: ", i+1);
        scanf("%f", &media[i]);

        if(media[i] > maior_media){
            maior_media = media[i];
            indice_maior_ra = i;
        }

        if(media[i] < 7.0){
            float nota_necessaria_exame = 10.0 - media[i];
            printf("O aluno %d precisa tirar %.2f de nota no exame.\n", i+1, nota_necessaria_exame);
        }
    }

    printf("A maior media foi de %.2f e o ra do aluno eh o: %d\n", media[indice_maior_ra], ra[indice_maior_ra]);
}