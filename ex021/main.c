/* Faça um programa que receba uma frase (máximo 100 caracteres) e uma letra qualquer, calcule e mostre a quantidade que essa letra aparece na frase digitada. Para descobrir o tamanho da frase digitada utilize a função strlen(cadeia de caracteres).Ao final, exibir o estoque (matriz).

  Dica: Usar a função gets(cadeia de caracteres) - biblioteca sring.h para realizar a leitura da frase. A função scanf só realiza leitura até o primeiro espaço em branco.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 101

int main(void) {
    setlocale (LC_ALL, "Portuguese");

    char frase[TAM];
    char letra;

    printf ("Digite uma frase com no máximo 100 caracteres: ");
    gets (frase);
    printf ("Digite uma letra: ");
    scanf ("%c", &letra);

    printf ("\nFrase digitada é: \n %s \n", frase);

    int cont = 0;
    for (int i = 0; i < strlen(frase); i++) {

        if (frase[i] == letra) {
            cont++;
        }
    }

     printf("A letra '%c' aparece %d vezes na frase.\n", letra, cont);

  
  return 0;
}