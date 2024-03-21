#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  printf ("Listagem de Alunos\n");
  printf ("Nome          Nota\n");
  printf ("__________________\n \n");

  printf ("Ana Beatriz    8,5\n");
  printf ("Bianca Martins 9,0\n");
  printf ("Cláudio Sá     5,5\n");
  printf ("Giovana Silva  7,5\n");
  printf ("___________________");

  return (0);
}