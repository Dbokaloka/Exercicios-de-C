#include <stdio.h>

int main() {
    int idade;
    int tempoEmpresa;

    printf("Digite a idade do funcionario: ");
    scanf("%d", &idade);

    printf("Digite o tempo de empresa em anos: ");
    scanf("%d", &tempoEmpresa);

    if (idade >= 18 && tempoEmpresa >= 1) {
        printf("Acesso autorizado.\n");
    } else {
        printf("Acesso nao autorizado.\n");
    }

    return 0;
}