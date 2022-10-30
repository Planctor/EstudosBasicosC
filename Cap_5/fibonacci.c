#include <stdio.h>


//desafio sequencia de fibonacci
int main()
{
    int contador, auxiliar = 0, partida = 1, final = 0;
    contador = 1;
    
    while (contador <= 10)
    {
        auxiliar = partida;
        partida = final;
        final += auxiliar;
        
        printf("%d\n", final);
        ++contador;
    }
}