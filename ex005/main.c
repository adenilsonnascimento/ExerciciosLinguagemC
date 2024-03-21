#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

int numero;
  printf("Digite um numero? \n");
  scanf("%d", &numero);

  int numeroatras = numero - 1;
  int numeroafrente = numero + 1;
  printf("Analisando o numero %d, seu antecessor é %d e o sucessor é %d.", numero, numeroatras, numeroafrente);
  
  
    return 0;
}