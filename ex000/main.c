
#include <stdio.h>>
#include <locale.h>
int main(int argc, char const *argv[])
{
    setlocale (LC_ALL, "Portuguese");

    printf ("Olá, Mundo!\n");
    printf ("Ufa! Já estou \"LIVRE\" da maldição.");
    return 0;
}
