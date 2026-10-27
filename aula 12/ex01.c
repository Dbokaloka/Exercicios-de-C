#include <stdio.h>

int main() {
    int n, i;
    int pares = 0, impares = 0;
    int somaP = 0, somaI = 0;

    for (i = 1; i <= 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n % 2 == 0) {
            pares++;
            somaP += n;
        } else {
            impares++;
            somaI += n;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);
    printf("Soma dos pares: %d\n", somaP);
    printf("Soma dos impares: %d\n", somaI);

    return 0;
}