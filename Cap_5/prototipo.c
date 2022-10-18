#include <stdio.h>

//Prototipo da funca
int funcTeste(int);

int main()
{
    int contador;
    contador = 1;

    while (contador <= 10)
    {
        printf("%d\n", funcTeste(contador));
        contador++;     
    }
    
    return 0;
}

//definição da funcao
int funcTeste(int valor) 
{
    return valor * valor;
}