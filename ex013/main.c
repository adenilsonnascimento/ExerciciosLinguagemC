#include <stdio.h>
#include <locale.h>



int main(void) {
  setlocale(LC_ALL, "Portuguese");

  // Uma empresa contrata um encanador, por x valor a diaria, e 8% de impostos a ser cobrado do trabalhador, calcule o valor recebido pelo encandor
  
  int dias;
  float valorDiaria, impostos = 8;

  printf ("Digite o numero de dias trabalhado: ");
  scanf ("%d", &dias);
  fflush(stdin);
  printf ("Digite o valor da diaria: ");
  scanf ("%f", &valorDiaria);
  fflush (stdin);
  printf ("\n");

  float valorSemImpostos = dias * valorDiaria;
  float valorComImpostos = (valorDiaria * (1 - impostos / 100)) * dias;

  printf ("O valor total é R$: %.2f, com desconto o valor a ser pago ao encanador é R$ %.2f...\n", valorSemImpostos, valorComImpostos);
  
    
  return 0;
}