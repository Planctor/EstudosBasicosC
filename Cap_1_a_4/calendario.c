#include <stdio.h>

int main() {
    int contador, valor, quarta;
    quarta = 1;
    contador = 31;

    for (int valor = 1; valor < contador; valor++)
    {
        for (int i = 0; i < 6; i++)
        {
            
            if (quarta == 1)
            {
                for (int a = 0; a < 6; a++)
                {
                    printf(" ");
                }                
            } 
            else {
                printf("%-2d ", valor);
                ++valor;
            }
            quarta = 0;

            if (valor >= 31)
            {
                break;
            }
        }
        
        if (valor == 6 || valor == 13 || valor == 20 || valor == 27)
        {
            printf("\n");
            printf("%-2d ", valor);
        }
        else {
            printf("%-2d ", valor);
            printf("\n"); 
        }

    }
    
    return 0;
}