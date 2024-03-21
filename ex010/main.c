#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

int num;
  printf("Digite um número qualquer: ");
  fflush (stdin);
  scanf("%d", &num);
  
int calc = num % 2;

  if (calc == 0) {
  printf(" O número %d é par ", num);
  } else {
    printf(" O número %d é ímpar", num);
  };
  
  
  
    return 0;
}