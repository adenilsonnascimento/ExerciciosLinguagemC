#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char nome1[50], nome2[50], nome3[50];
    char sexo, sexo1, sexo2;
    float nota, nota1, nota2;

    printf("Digite o nome da primeira pessoa: \n");
    fgets(nome1, 50, stdin);
    printf("Digite o sexo da primeira pessoa (M ou F): \n");
    scanf(" %c", &sexo); 
    printf("Digite a nota da primeira pessoa: \n");
    scanf("%f", &nota);

   
    while (getchar() != '\n');

    printf("Digite o nome da segunda pessoa: \n");
    fgets(nome2, 50, stdin);
    printf("Digite o sexo da segunda pessoa (M ou F): \n");
    scanf(" %c", &sexo1);
    printf("Digite a nota da segunda pessoa: \n");
    scanf("%f", &nota1);

  
    while (getchar() != '\n');

    printf("Digite o nome da terceira pessoa: \n");
    fgets(nome3, 50, stdin);
    printf("Digite o sexo da terceira pessoa (M ou F): \n");
    scanf(" %c", &sexo2);
    printf("Digite a nota da terceira pessoa: \n");
    scanf("%f", &nota2);

  
    while (getchar() != '\n');

    printf("Cadastrando a primeira pessoa: \n");
    printf("______________________________\n \n");
    printf("NOME: %s \n", nome1);
    printf("SEXO: %c \n", sexo);
    printf("NOTA: %.2f \n \n", nota);

    printf("Cadastrando a segunda pessoa: \n");
    printf("______________________________\n \n");
    printf("NOME: %s \n", nome2);
    printf("SEXO: %c \n", sexo1);
    printf("NOTA: %.2f \n\n", nota1);

    printf("Cadastrando a terceira pessoa: \n");
    printf("______________________________\n \n");
    printf("NOME: %s \n", nome3);
    printf("SEXO: %c \n", sexo2);
    printf("NOTA: %.2f \n", nota2);

    printf("______________________________\n \n");

    return 0;
}