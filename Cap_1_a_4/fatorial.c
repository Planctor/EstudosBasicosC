#include <stdio.h>

int main() {
    int contador, valor, total, soma;
    valor = 0;
    soma = 0;
    total = 0;
    contador = 0;

    printf("Escreva o valor:\n");
    scanf("%d", &contador);

    /* definindo um valor fixo entre a resposta*/
    valor = contador;

    while (0 < contador)
    { 
        /*aqui salva o valor do ultimo loop*/
        soma = valor;
        /*decrementa o loop*/
        --contador;
        /*pega o valor fixo já salvo e faz a multiplicação já decrementado*/
        valor = valor * contador;
    }

    printf("%d\n", soma);
        
    return 0;
}