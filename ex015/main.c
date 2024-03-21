#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

/*Programa para converter horas, segundos e minutos */

  int valoremSegundos, segundos, minutos, horas, resto;

  printf("Digite o valor em segundos: ");
  scanf("%d", &valoremSegundos);
  printf ("\n");

  horas = valoremSegundos / 3600;
  resto = valoremSegundos % 3600;
  minutos = resto / 60;
  segundos = resto % 60;

  printf ("A hora é: %d:%d:%d. " , horas, minutos, segundos);
  
  return 0;
}
