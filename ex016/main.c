#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

/*Programa para converter  Celsius para Fahrenheit e Fahrenheit em Celsius */

  float cel, fah;

  char caracter;
  printf ("Digite \"C\" para converter de Faherenheit para Celsius: \n");
  printf ("Digite \"F\" para converter de Celsius para Fahrenheit: \n");
  printf ("Escolha uma opção: ");
  scanf ("%c", &caracter);
  printf ("\n");

  if (caracter == 'c' | caracter == 'C') {

    printf ("Digite o valor em Fahrenheit: ");
    scanf ("%f", &fah);
    cel = (fah - 32) * 5/9;
    printf ("\nO valor em Celsius é: %.2f. ", cel);
    
  } else if (caracter == 'f' | caracter == 'F'){

     printf ("Digite o valor em Celsius: ");
      scanf ("%f", &cel);
      fah = (cel * 9/5) + 32;
      printf ("\nO valor em Fahrenheit é: %.2f. ", fah);
    
  } else {
    printf ("Opção inválida");
  };
  
  return 0;
}
