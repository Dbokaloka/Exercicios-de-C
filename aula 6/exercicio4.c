#include <stdio.h>

int main() {
    int opcao;

    printf("Digite uma opcao (1 a 4): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce escolheu: Saque. Por favor, dirija-se a uma caixa eletronica para realizar o saque.\n");
            break;

        case 2:
            printf("Voce escolheu: Deposito. Por favor, insira o dinheiro ou cheque na caixa eletronica.\n");
            break;

        case 3:
            printf("Voce escolheu: Transferencia. Informe os dados da conta de destino para realizar a transferencia.\n");
            break;

        case 4:
            printf("Saindo do sistema... Obrigado por usar nosso atendimento!\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;