#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i, aprovados = 0, abaixo = 0;

    for (i = 1; i <= 10; i++) {
        do {
            printf("Digite uma nota entre 0 e 10: ");
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;

        if (nota >= 7)
            aprovados++;
        else
            abaixo++;
    }

    media = soma / 10;

    printf("Media da turma: %.2f\n", media);
    printf("Aprovados: %d\n", aprovados);
    printf("Abaixo de 7: %d\n", abaixo);

    return 0;
}