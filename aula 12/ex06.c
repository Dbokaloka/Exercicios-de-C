#include <stdio.h>

int main() {
    float venda, total = 0, maior, menor, media;
    int quantidade = 0, opcao;

    do {
        printf("Valor da venda: ");
        scanf("%f", &venda);

        if (venda > 0) {
            if (quantidade == 0) {
                maior = venda;
                menor = venda;
            }

            if (venda > maior)
                maior = venda;

            if (venda < menor)
                menor = venda;

            total += venda;
            quantidade++;
        } else {
            printf("Valor invalido!\n");
        }

        printf("Deseja continuar? (1-Sim / 0-Nao): ");
        scanf("%d", &opcao);

    } while (opcao == 1);

    if (quantidade > 0) {
        media = total / quantidade;

        printf("Total: R$ %.2f\n", total);
        printf("Quantidade: %d\n", quantidade);
        printf("Maior venda: R$ %.2f\n", maior);
        printf("Menor venda: R$ %.2f\n", menor);
        printf("Media: R$ %.2f\n", media);
    } else {
        printf("Nenhuma venda valida registrada.\n");
    }

    return 0;
}