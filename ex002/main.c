#include <stdio.h>
#include <locale.h>
int main (){
  setlocale(LC_ALL, "Portuguese");
  
  printf ("=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf (" \\a\t   = \tBeep\n");
  printf (" \\n\t   = \tNova Linha\n");
  printf (" \\t\t   = \tTabulação\n");
  printf (" \\\\\t   = \tBarra\n");
  printf (" %%%%\t   = \tPorcentagem\n");
  printf (" \\?\t   = \tInterrogação\n");

  
  printf ("=-=-=-=-=-=-=-=-=-=-=-=");
  
  return (0);
}