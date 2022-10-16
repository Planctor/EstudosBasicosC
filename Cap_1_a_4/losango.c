#include <stdio.h>

int main()
{
    printf("========= %s =========\n", "LOSANGO");

    //parte de cima do losango
    // de 2 em 2, para somar 2 ao lado de cada asteristicos
    for (int b = 1; b < 9; b +=2)
    { 
        //loop para criar os espaços em branco
        for (int a = 9; a > b ; a -= 2)
            printf(" ");
        
        //loop para criar os asteristicos
        // como o loop principal conta de 2 em 2, ele sempre adicionará mais 2
        // a cada ciclo
        for (int c = 0; c < b; c++)
            printf("*");
            
        //apos finalizar cada ciclo ele pula uma linha iniciando outra
        printf("\n");
    }
    
    //parte de baixo do losango
    //como o losango de cima finaliza com 9, já começamos com -2 para 
    //deixar espelhado
    for (int e = 2; e < 8; e += 2)
    {
        //cria os espaços em branco
        //nota: começamos do 2 pois ao contrario o losango ficaria incorrento
        //começando do 2 ele já adiciona 2 espaços em branco tornando-o refletido
        for (int f = 0; f <= e; f += 2)
            printf(" ");
        
        //cria os asteristicos 
        for (int g = 6; g >= e; g--)
            printf("*");

        printf("\n");
    }
    
    //se tudo der certo retorna que o codigo está certo
    return 0;
}