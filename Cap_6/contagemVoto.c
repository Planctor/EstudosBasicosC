#include <stdio.h>
#define TAMANHO_RESPOSTAS 40
#define POSSIVEIS_RESPOSTAS 11

int main()
{
    //obs: a linguagem C não verifica o limete do array, tendo isso em mente pode se evitar problemas futuros
    int respostas[TAMANHO_RESPOSTAS] =  {1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8};
    int resultado[POSSIVEIS_RESPOSTAS] = {0}; //é preciso começar declarando pelo menos o primeiro valor da variavel ja que ela não se auto declara

    printf("%s%13s%13s\n", "Valores", "Votos", "Histograma");

    for (int a = 0; a < (TAMANHO_RESPOSTAS - 1); a++)//C é ponto zero, ou seja começa a conta os valores a partir do zero
       ++resultado[respostas[a]]; //soma +1 ao resultado, com a resposta baseada no ciclo do loop    

    for (int i = 1; i < 11; i++)// definimos 11 pois começamos a contar a partir do 1
    {
        printf("%4d%15d%6s", i, resultado[i], "");
        for (int c = 0; c < resultado[i]; c++)
        {
            printf("*");
        }       
        printf("\n");
    }
    
    return 0;    
}