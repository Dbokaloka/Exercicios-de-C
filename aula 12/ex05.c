#include <stdio.h>

int main() {
    int inicio, fim, i;
    int soma = 0, somaP = 0, impares = 0;

    printf("Digite o inicio: ");
    scanf("%d", &inicio);

    printf("Digite o fim: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    for (i = inicio; i <= fim; i++) {
        soma += i;

        if (i % 2 == 0)
            somaP += i;
        else
            impares++;
    }

    printf("Soma total: %d\n", soma);
    printf("Soma dos pares: %d\n", somaP);
    printf("Quantidade de impares: %d\n", impares);

    return 0;
}