#include <stdio.h>
#include <time.h> //biblioteca tempo
#include <stdlib.h> //biblioteca pra gerar numero aleatorio
#define TAMANHO 10

int main()
{
    int numeros[TAMANHO];
    int contador = 0, aux, max = 80, min = 40;
    
    //semente, sem isso não gera valor aleatorio 
    //a cada ciclo
    srand(time(NULL)); 
    for(int z = 0; z < TAMANHO; z++)
        numeros[z] = (rand() % (max - min)) + min; // gera numeros entre 40 e 80
    
    printf("\nANTES DO LOOP: ");
    for(int i = 0; i < TAMANHO; i++)
        printf("%3d", numeros[i]);
        
    //buble sort(ordenção por flutuação) 
    //o menor valor sobe o maior desce
    
    //primeira fase entra em cada valor 1 de cada vez
    for(int a = 0; a < TAMANHO; a++)
    
        //depois, no proximo for ele verifica cada um dos resultados,
        //mandando o maior valor para o final
        for(int n = 0; n < TAMANHO; n++)
        {
            //verifica se o primeiro valor é maior que o proximo e troca caso
            //for maior
            if(numeros[n] > numeros[n + 1])
            {
                aux = numeros[n];
                numeros[n] = numeros[n + 1];
                numeros[n + 1] = aux;
            }
        }
    
    printf("\nDEPOIS DO LOOP: ");
    for(int i = 0; i < TAMANHO; i++)
        printf("%3d", numeros[i]);

    return 0;
}

