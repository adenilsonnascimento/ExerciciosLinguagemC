#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

float num1;
  printf("Digite a primeira nota do aluno: \n");
  fflush (stdin);
  scanf("%f", &num1);
float num2;
  printf("Digite a segunda nota do aluno: \n");
  fflush (stdin);
  scanf("%f", &num2);

float media = (num1 + num2) / 2;

  printf ("O aluno obteve a média: %.2f e foi %s." , media, (media >= 7.0)? "Aprovado": "Reprovado");
  
  

    return 0;
}