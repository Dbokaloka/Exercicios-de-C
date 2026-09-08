#include <stdio.h>

int main() {
    float valorCompra, desconto, valorPagar;
    int formaPagamento;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("\nEscolha a forma de pagamento:\n");
    printf("1 - PIX (20%% de desconto)\n");
    printf("2 - Debito (15%% de desconto)\n");
    printf("3 - Credito (5%% de desconto)\n");
    printf("Digite a opcao: ");
    scanf("%d", &formaPagamento);

    switch (formaPagamento) {
        case 1:
            desconto = valorCompra * 0.20;
            break;

        case 2:
            desconto = valorCompra * 0.15;
            break;

        case 3:
            desconto = valorCompra * 0.05;
            break;

        default:
            printf("Forma de pagamento invalida!\n");
            return 0;
    }

    valorPagar = valorCompra - desconto;

    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}