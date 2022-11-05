#include <stdio.h>
#include <conio.h>
#define TAMANHO 10 //definindo o tamanho da array

//prototipo
int media(int [], int);
void moda(int [], int);
void mediana(int [], int);

int main()
{
    static int valores[TAMANHO];
    int valor = 0;

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("\e[H\e[2J"); //limpa a tela em terminal linux
        printf("Digite o valor:\n");
        scanf("%d", &valor);
        valores[i] = valor;
    }

    for (int a = 0; a < TAMANHO; a++)
        printf("%3d", valores[a]);

    //printf("\n%d", media(valores, TAMANHO));
    //moda(valores, TAMANHO);
    mediana(valores, TAMANHO);

    return 0;      
}

int media(int array[], int tamanho)
{
    int total = 0;
    for (int i= 0; i < tamanho; i++)
        total += array[i];

    return total / tamanho;
}

void moda(int array[], int tamanho)
{
    int total[TAMANHO] = {0};
    int maior = 0;
    int valor;

    for (int i = 0; i < tamanho; i++)
    {
        ++total[array[i]];
    }
    
    printf("\n");

    for (int a = 1; a < tamanho; a++)
    {
        printf("%d\t", total[a]);
        for (int b = 0; b < total[a]; b++)
        {           
            printf("*");
        }
        printf("\n");
    }

    for (int c = 0; c < tamanho; c++)
    {
        if (total[c] > total[c - 1])
        {
            //salvar a quantidade de vezes
            maior = total[c];
            //salvar a posição do array
            valor = c;
        }
    }

    printf("A nota que mais se repetiu foi a de numero: %d, %d vezes", array[valor], maior);    
}

void mediana(int array[], int tamanho)
{
    int aux = 0;

    //organiza de forma crescente
    for (int i = 0; i < tamanho; i++)
    {
        for (int a = 0; a < tamanho; a++)
        {
            if ( array[a] >  array[a + 1])
            {
                aux = array[a];
                array[a] = array[a + 1];
                array[a + 1] = aux;
            }            
        }        
    }

    //printf("\n");
    //for (int b = 1; b <= tamanho; b++)
        //printf("%d\n", array[b]);

    printf("A mediana e, %d", tamanho % 2 ? array[tamanho / 2] : array[ ((array[tamanho / 2] + (array[tamanho / 2]) + 1)) / 2 ]);
    
}
