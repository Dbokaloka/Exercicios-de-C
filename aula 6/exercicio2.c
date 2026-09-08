#include <stdio.h>

int main() {
    char nota;

    printf("Digite a nota conceitual (A, B, C, D ou F): ");
    scanf(" %c", &nota);

    switch (nota) {
        case 'A':
            printf("Excelente\n");
            break;
        case 'B':
            printf("Bom\n");
            break;
        case 'C':
            printf("Razoavel\n");
            break;
        case 'D':
            printf("Ruim\n");
            break;
        case 'F':
            printf("Reprovado\n");
            break;
        default:
            printf("Nota invalida\n");
    }

    return 0;
}