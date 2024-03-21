#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float real, dolar, cotacao;
  char opcao;

  printf("Selecione a conversão:\n");
  printf("Digite 'd' para converter Real em Dólar\n");
  printf("Digite 'r' para converter Dólar em Real\n");
  printf("Opção: ");
  scanf(" %c", &opcao);

  if (opcao == 'd') {
    printf("Digite o valor em real: R$ ");
    scanf("%f", &real);
    printf("Digite a cotação do dólar: R$ ");
    scanf("%f", &cotacao);
    dolar = real / cotacao;
    printf("O valor em dólar é: $%.2f\n", dolar);

  } else if (opcao == 'r') {
    printf("Digite o valor em dólar: $");
    scanf("%f", &dolar);
    printf("Digite a cotação do real: R$ ");
    scanf("%f", &cotacao);
    real = dolar * cotacao;
    printf("O valor em real é: R$%.2f\n", real);

  } else {
    printf("Opção Inválida.\n");   
  }

  return 0;
}
