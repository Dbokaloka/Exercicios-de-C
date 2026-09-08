#include <stdio.h>

int main() {
    int opcao;

    printf("===== SISTEMA DE GESTAO DE TRANSPORTE =====\n");
    printf("1 - Carro\n");
    printf("2 - Motocicleta\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");
    printf("6 - Encerrar\n");

    printf("\nDigite o codigo do tipo de veiculo: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nVeiculo selecionado: Carro\n");
            printf("Finalidade: Transporte de passageiros em pequena quantidade.\n");
            break;

        case 2:
            printf("\nVeiculo selecionado: Motocicleta\n");
            printf("Finalidade: Entregas rapidas e transporte de pequenas cargas.\n");
            break;

        case 3:
            printf("\nVeiculo selecionado: Van\n");
            printf("Finalidade: Transporte de passageiros ou pequenas cargas.\n");
            break;

        case 4:
            printf("\nVeiculo selecionado: Onibus\n");
            printf("Finalidade: Transporte coletivo de passageiros.\n");
            break;

        case 5:
            printf("\nVeiculo selecionado: Caminhao\n");
            printf("Finalidade: Transporte de cargas.\n");
            break;

        case 6:
            printf("\nSistema encerrado. Obrigado por utilizar o sistema!\n");
            break;

        default:
            printf("\nCodigo invalido. Escolha um tipo de veiculo disponivel.\n");
    }

    return 0;
}
