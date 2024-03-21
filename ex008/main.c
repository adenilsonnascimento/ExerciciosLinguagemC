#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

char nome[20];
  printf("Digite o nome do Aluno: \n");
  fgets(nome, 20, stdin);
printf ("\n _______*****______\n");

float nota1, nota2, nota3, nota4;
  printf("Digite a primeira nota: \n");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: \n");
  scanf("%f", &nota2);  
  printf("Digite a terceira nota: \n");
  scanf("%f", &nota3);
  printf("Digite a quarta nota: \n");
  scanf("%f", &nota4);

  float media = (nota1 + nota2 + nota3 + nota4)/4;

  printf ("\n _______*****______\n");
  printf("A média do aluno %s é %2f", nome, media);
  
  
    return 0;
}