#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    int num1;
    int num2;

    do {
        printf("Escolha uma opção: \n\n");
        printf("1 _ Soma \n");
        printf("2 _ Subtração \n");
        printf("3 _ Multiplicação \n");
        printf("4 _ Divisão \n");
        printf("5 _ Sair \n");

        printf ("Opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nDigite dois valores: \n");
            scanf("%d %d", &num1, &num2);

            switch (opcao) {
                case 1:
                    printf("Resultado da soma: %d\n", num1 + num2);
                    break;
                case 2:
                    printf("Resultado da subtração: %d\n", num1 - num2);
                    break;
                case 3:
                    printf("Resultado da multiplicação: %d\n", num1 * num2);
                    break;
                case 4:
                    while (num2 == 0) {
                        printf("Não é possível dividir por zero. Por favor, digite outro valor: \n");
                        scanf("%d", &num2);
                    }
                    printf("Resultado da divisão: %d\n", num1 / num2);
                    break;
            }
        } else if (opcao != 5) {
            printf("Opção inválida!\n");
        } else {
            printf("Saindo do programa...\n");
        }
    } while (opcao != 5);

    return 0;
}
