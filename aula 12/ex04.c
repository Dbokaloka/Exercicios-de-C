#include <stdio.h>

int main() {
    int n, maior, menor, i;
    int positivos = 0, negativos = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (i == 1) {
            maior = n;
            menor = n;
        }

        if (n > maior)
            maior = n;

        if (n < menor)
            menor = n;

        if (n > 0)
            positivos++;
        else if (n < 0)
            negativos++;
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);

    return 0;
}