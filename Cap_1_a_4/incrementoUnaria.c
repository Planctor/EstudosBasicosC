#include <stdio.h>

int main() 
{
    int valor;
    valor = 0;

    /*Só vai adicionar no final da execução por isso vai devolver o valor atual*/
    printf("%d\n", valor++);

    /*vai somar com a execução anterior e depois somar anteriormente mais uma vez*/
    printf("%d\n", ++valor);

    return 0;
}