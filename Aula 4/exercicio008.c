#include <stdio.h>

int main() {
    int estoque;

    printf("Digite a quantidade de produtos em estoque: ");
    scanf("%d", &estoque);

    if (estoque < 10) {
        printf("Alerta: estoque baixo!\n");
    }

    return 0;
}