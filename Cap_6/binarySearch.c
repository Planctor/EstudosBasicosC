#include <stdio.h>
#define TAM 10

//falta ser corrigido
int main()
{
    int valoresArray[TAM] = {1,2,3,4,5,6,7,8,9,10};
    int inicio = valoresArray[1];
    int final = valoresArray[TAM - 1];
    int meio;
    int procurado = 7;

    //SEMPRE QUE FAZER A PESQUISA BINARIA SE DEVE ANTES ORGANIZAR OS VALORES, NA ORDEM CRESCENTE OU DECRESCENTE
    
    while (meio != procurado)
    {
        meio = ((inicio + final) / 2) - 1;
        
        if (meio == procurado)
            printf("valor encotrado %d\n", meio);
        else if (meio < procurado)
            inicio = valoresArray[meio + 1];
        else 
            final = valoresArray[meio - 1];
    }    

    return 0;
}