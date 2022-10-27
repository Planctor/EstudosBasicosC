#include <stdio.h>

char txt;
void lado(int);
void fillCharacter(char);

int main()
{
    printf("Digite o Caractere:\n");
    txt = getchar();
    lado(8);
    return 0;
}

void lado(int valor)
{
    int contador = 1;
    int contador2= 1;
    
    while (contador2 <= valor)
    {
        while (contador <= valor)
        {
            printf("%c", txt);
            ++contador;
        }
        
        printf("\n");
        contador = 1;
        contador2++;
    }
}