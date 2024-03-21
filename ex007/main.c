#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

char alf;
  printf("Digite uma letra do alfabeto: \n");
  fflush(stdin);
  alf = getchar();

  

printf ("\n Antes da letra \"%c\" temos a letra \"%c\" e depois temos a letra \"%c\"", alf, alf-1 , alf+1);
  
  
    return 0;
}