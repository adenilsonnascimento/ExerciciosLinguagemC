
// receber os valores dos vetores do usúarios e imprimir ele e o dobro dele 


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
     setlocale (LC_ALL, "Portuguese");

  
    int vetor[10];
    int numero;
    int quadrado;
  
    for (numero = 0; numero < 10; numero++) {
         printf("Digite um número: ");
         scanf("%d", &vetor[numero]);
    }

    printf("\n");

    for (quadrado = 0; quadrado < 10; quadrado++){
         printf("%d\n", vetor[quadrado] * vetor[quadrado]);
    }

    system("cls");

    printf("Numero\tQuadrado\n");
    for (int i = 0; i < 10; i++) {
        printf("O número é %d e o quadrado é \t%d\n", vetor[i], vetor[i] * vetor[i]);
    }

    return 0;
}
