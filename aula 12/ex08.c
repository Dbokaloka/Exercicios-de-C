#include <stdio.h>

int main() {
    int n, positivos = 0, negativos = 0;
    int somaP = 0, somaN = 0, quantidade = 0;
    float media;

    do {
        printf("Digite um numero (0 encerra): ");
        scanf("%d", &n);

        if (n > 0) {
            positivos++;
            somaP += n;
            quantidade++;
        } else if (n < 0) {
            negativos++;
            somaN += n;
            quantidade++;
        }

    } while (n != 0);

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Soma positivos: %d\n", somaP);
    printf("Soma negativos: %d\n", somaN);

    if (quantidade > 0) {
        media = (float)(somaP + somaN) / quantidade;
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum numero foi informado.\n");
    }

    return 0;
}