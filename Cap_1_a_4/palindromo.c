#include <stdio.h>

int main() {
    int entrada, inteiro, contador, valor, fator, total, segundo, terceiro, soma;
    contador = 5;
    valor = 10;
    segundo = 1;
    terceiro = 100000;
    soma = 0;

    printf("Digite um valor de 5 digitos:\n");
    scanf("%d", &entrada);

    while (0 < contador)
    {
        /*divide os valores separadamente*/
        inteiro = entrada;
        fator = inteiro % valor;
        valor *= 10;
        --contador;
        inteiro -= fator;
        int k = fator / segundo;
        /*multiplica os valores separadamente baseado na posição*/
        segundo *= 10;
        terceiro /= 10;
        total = k * terceiro;
        soma += total;
    }

    if (soma == entrada)
    {
        printf("E um número palindromo de 5 digitos");
    } 
    else
    {
        printf("Não e um numero palindromo");
    }

    return 0;
}