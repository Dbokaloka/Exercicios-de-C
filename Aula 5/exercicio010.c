#include <stdio.h>

int main() {
    float media;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    printf("Media informada: %.1f\n", media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 5.0) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}