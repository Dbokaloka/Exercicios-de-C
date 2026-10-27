#include <stdio.h>

int main() {
    int opcao, quantidade = 0;

    do {
        printf("\n1 - Cadastrar cliente\n");
        printf("2 - Consultar quantidade\n");
        printf("3 - Encerrar\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            quantidade++;
            printf("Cliente cadastrado!\n");
        } else if (opcao == 2) {
            printf("Cadastrados: %d\n", quantidade);
        } else if (opcao != 3) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    return 0;
}