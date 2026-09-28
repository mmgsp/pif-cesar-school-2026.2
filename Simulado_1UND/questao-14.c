#include <stdio.h>

int main() {
    const int senhaCorreta = 2026;
    int senha;
    int tentativas = 0;
    int acesso = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (senha == senhaCorreta) {
            acesso = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acesso) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
