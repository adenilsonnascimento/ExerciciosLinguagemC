#include <stdio.h>

int main(void) {
    int senhafixa = 8745;
    int senha;

    int tentativas = 3;

    while (tentativas > 0) {
        printf("Digite a senha: \n");
        printf("Senha: ");
        scanf("%d", &senha);

        if (senha == senhafixa) {
            printf("Desbloqueado\n");
            break; 
        } else {
            printf("Senha incorreta. Tente novamente.\n");
            tentativas--;
        }
    }

    if (tentativas == 0) {
        printf("Número máximo de tentativas excedido. Bloqueado.\n");
    }

    return 0;
}
