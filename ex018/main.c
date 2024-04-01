#include <stdio.h>

int main(void) {
   float peso;
   float altura;

   float imc;

   printf("Digite seu peso: ");
   scanf("%f", &peso);
   printf("Digite sua altura: ");
   scanf("%f", &altura);

   imc = peso / (altura * altura);

   if (imc < 18.5) {
       printf ("Abaixo do peso");
   } else if (imc >= 18.5 && imc <= 24.9){
       printf ("Peso normal");
   } else if (imc > 24.9 && imc <= 29.9){
       printf ("Sobrepeso");
   } else if (imc > 29.9 && imc <= 34.9){
       printf ("Obesidade grau 1");
   } else if (imc > 34.9 && imc <= 39.9){
       printf ("Obesidade grau 2");
   } else {
       printf ("Obesidade grau 3");
   };
  

  
}