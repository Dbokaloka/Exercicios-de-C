#include <stdio.h>

int main() {
    float orcamento;

    printf("Digite o orcamento final da viagem: R$ ");
    scanf("%f", &orcamento);

    if (orcamento >= 10000.00) {
        printf("Maria e Joao farao uma viagem internacional.\n");
    } else {
        printf("Maria e Joao farao uma viagem nacional.\n");
    }

    return 0;
}