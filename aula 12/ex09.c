#include <stdio.h>

int main() {
    float n1, n2, frequencia, media;
    int i, aprovados = 0, reNota = 0;
    int reFreq = 0, reAmbos = 0;

    for (i = 1; i <= 10; i++) {
        printf("\nEstudante %d\n", i);

        printf("Primeira nota: ");
        scanf("%f", &n1);

        printf("Segunda nota: ");
        scanf("%f", &n2);

        printf("Frequencia (%%): ");
        scanf("%f", &frequencia);

        media = (n1 + n2) / 2;

        if (media >= 7 && frequencia >= 75) {
            aprovados++;
            printf("Aprovado\n");
        } else if (media < 7 && frequencia >= 75) {
            reNota++;
            printf("Reprovado por nota\n");
        } else if (media >= 7 && frequencia < 75) {
            reFreq++;
            printf("Reprovado por frequencia\n");
        } else {
            reAmbos++;
            printf("Reprovado por nota e frequencia\n");
        }
    }

    printf("\nAprovados: %d\n", aprovados);
    printf("Reprovados por nota: %d\n", reNota);
    printf("Reprovados por frequencia: %d\n", reFreq);
    printf("Reprovados por ambos: %d\n", reAmbos);

    return 0;
}