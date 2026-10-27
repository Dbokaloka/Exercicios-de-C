#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000, valor;

    do {
        printf("\n1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Encerrar\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo: R$ %.2f\n", saldo);

        } else if (opcao == 2) {
            printf("Valor do deposito: ");
            scanf("%f", &valor);

            if (valor > 0) {
                saldo += valor;
                printf("Deposito realizado!\n");
            } else {
                printf("Valor invalido!\n");
            }

        } else if (opcao == 3) {
            printf("Valor do saque: ");
            scanf("%f", &valor);

            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                printf("Saque realizado!\n");
            } else {
                printf("Saque invalido!\n");
            }

        } else if (opcao != 4) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    printf("Saldo final: R$ %.2f\n", saldo);

    return 0;
}