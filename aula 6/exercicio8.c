#include <stdio.h>

int main() {
    int mes;

    printf("===== CONSULTA DE MESES =====\n");
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("Mes correspondente: Janeiro\n");
            break;

        case 2:
            printf("Mes correspondente: Fevereiro\n");
            break;

        case 3:
            printf("Mes correspondente: Marco\n");
            break;

        case 4:
            printf("Mes correspondente: Abril\n");
            break;

        case 5:
            printf("Mes correspondente: Maio\n");
            break;

        case 6:
            printf("Mes correspondente: Junho\n");
            break;

        case 7:
            printf("Mes correspondente: Julho\n");
            break;

        case 8:
            printf("Mes correspondente: Agosto\n");
            break;

        case 9:
            printf("Mes correspondente: Setembro\n");
            break;

        case 10:
            printf("Mes correspondente: Outubro\n");
            break;

        case 11:
            printf("Mes correspondente: Novembro\n");
            break;

        case 12:
            printf("Mes correspondente: Dezembro\n");
            break;

        default:
            printf("Opcao invalida. Digite um numero entre 1 e 12.\n");
    }

    return 0;
}
