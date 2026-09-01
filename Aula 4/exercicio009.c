#include <stdio.h>

int main() {
    float valorCompra;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra >= 500.00) {
        percentualDesconto = 15.0;
    } else {
        percentualDesconto = 5.0;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    printf("\n========== COMPRA ==========\n");
    printf("Valor original: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final da compra: R$ %.2f\n", valorFinal);
    printf("============================\n");

    return 0;
}

