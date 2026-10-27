#include <stdio.h>

int main() {
    int codigo, senha;
    int tentativas = 0, autorizado = 0;

    while (tentativas < 3 && !autorizado) {
        printf("Digite o codigo: ");
        scanf("%d", &codigo);

        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (codigo == 1234 && senha == 2026) {
            autorizado = 1;
            printf("Acesso autorizado!\n");
        } else {
            tentativas++;
            printf("Dados incorretos!\n");
        }
    }

    if (!autorizado)
        printf("Acesso bloqueado!\n");

    return 0;
}