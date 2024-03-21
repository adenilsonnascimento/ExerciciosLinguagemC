#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char nome[50]; 
    printf("Qual é o seu nome? \n");
    fgets(nome, 50, stdin); 

    int idade;
    printf("Qual é a sua idade? \n");
    scanf("%d", &idade);

    float peso;
    printf("Qual é o seu peso? \n");
    scanf("%f", &peso);

    printf("Muito Prazer, %s. Você tem %d anos e pesa %.2f kg.\n", nome, idade, peso);

    return 0;
}