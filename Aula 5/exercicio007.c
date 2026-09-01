#include <stdio.h>

int main() {
    float valorCompra;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra >= 200.0) {
        percentualDesconto = 10.0;
    } else if (valorCompra >= 100.0) {
        percentualDesconto = 5.0;
    } else {
        percentualDesconto = 0.0;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    printf("\nValor da compra: R$ %.2f\n", valorCompra);
    printf("Desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}