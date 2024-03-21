#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

int num;
  printf("Digite um número? \n");
  scanf("%d", &num);

int numd = num * 2;
float num3 = (float)num / 3;

  printf ("Analisando o número %d, o seu dobro é %d e a sua terça parte é %2f.", num, numd, num3);
  
  
    return 0;
}