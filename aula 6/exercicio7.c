#include <stdio.h>

int main() {
    int opcao;

    printf("===== CARDAPIO DO RESTAURANTE =====\n");
    printf("1 - Hamburguer Artesanal - R$ 25,00\n");
    printf("2 - Pizza Calabresa - R$ 45,00\n");
    printf("3 - Prato Executivo - R$ 35,00\n");
    printf("4 - Refrigerante - R$ 8,00\n");
    printf("5 - Sobremesa - R$ 12,00\n");
    printf("6 - Encerrar Pedido\n");

    printf("\nDigite o codigo do produto desejado: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nProduto: Hamburguer Artesanal\n");
            printf("Valor: R$ 25,00\n");
            printf("Pedido confirmado! Seu Hamburguer Artesanal foi adicionado ao pedido.\n");
            break;

        case 2:
            printf("\nProduto: Pizza Calabresa\n");
            printf("Valor: R$ 45,00\n");
            printf("Pedido confirmado! Sua Pizza Calabresa foi adicionada ao pedido.\n");
            break;

        case 3:
            printf("\nProduto: Prato Executivo\n");
            printf("Valor: R$ 35,00\n");
            printf("Pedido confirmado! Seu Prato Executivo foi adicionado ao pedido.\n");
            break;

        case 4:
            printf("\nProduto: Refrigerante\n");
            printf("Valor: R$ 8,00\n");
            printf("Pedido confirmado! Seu Refrigerante foi adicionado ao pedido.\n");
            break;

        case 5:
            printf("\nProduto: Sobremesa\n");
            printf("Valor: R$ 12,00\n");
            printf("Pedido confirmado! Sua Sobremesa foi adicionada ao pedido.\n");
            break;

        case 6:
            printf("\nEncerrando pedido... Obrigado pela preferencia!\n");
            break;

        default:
            printf("\nOpcao invalida. Produto nao encontrado no cardapio.\n");
    }

    return 0;
}
