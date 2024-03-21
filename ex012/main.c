#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  int pessoas;
  float valorTotal;
  float desconto;

  printf ("Digite a quantidade de pessoas: ");
  scanf ("%d", &pessoas);
  fflush(stdin);
  printf ("Digite o valor total: ");
  scanf ("%f", &valorTotal);
  fflush (stdin);
  printf ("Digite o valor do desconto: ");
  scanf ("%f", &desconto);
  fflush (stdin);
  printf ("\n");

  float valorComDesconto = valorTotal * (1 - desconto / 100);
  float valorPorPessoa = valorComDesconto / pessoas;

  printf ("O valor total é R$: %.2f, com desconto, o total a pagar é R$ %.2f...\n", valorTotal, valorComDesconto);
  printf ("Divido para %d pessoas, cada uma pagará R$ %.2f \n", pessoas, valorPorPessoa);
    
  return 0;
}