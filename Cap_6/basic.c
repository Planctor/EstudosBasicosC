#include <stdio.h>
//não são variaveis pois n são alocadas na memoria
//e sim definiçoes
#define TAMANHO 10
//tag   id      valor

int main()
{
    int arr[TAMANHO];
    int total = 0;

    //definir uma  constante simbólica, é um erro já que ele não reserva nenhum espaço na memoria
    for (int i = 0; i < TAMANHO; i++) 
        arr[i] = i;

    //segundo for faz referencia ao primeiro printf
    printf("%s%13s", "Posicao", "Valor\n"); for (int a = 0; a < TAMANHO; a++)
    {
        printf("%4d %13d\n", a + 1, arr[a] + 1);
        total += (arr[a] + 1);
    }

    printf("%6s%12d", "TOTAL", total);

    return 0;    
}