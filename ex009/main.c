#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

  char prod[20];
  printf("Digite o nome do produto: \n");
  fflush(stdin);
  fgets(prod, 20, stdin);

  float preco;
  printf("Digite o preço do produto: \n");
  fflush(stdin);
  scanf("%f", &preco);

  float desc;
  printf("Digite o desconto do produto: \n");
  fflush(stdin);
  scanf("%f", &desc);

  float totalp = preco - (preco * desc / 100);

  printf ("O valor do %s é %.2f, e com desconto fica: %.2f.", prod, preco, totalp );
  
  
  
    return 0;
}