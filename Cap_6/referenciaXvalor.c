#include <stdio.h>
#define TAMANHO 5

void referencia(int [], int);
void valorFuncao(int);

int main()
{
    int valor[TAMANHO] = {1,2,3,4,5};
    int valorArray2[TAMANHO] = {1,2,3,4,5};
    //passando a array por referencia, significa que ele consegue 
    //modificar o array internamento, ou seja modifica o array pai
    // não criando uma copia como passando por valor
    
    //referencia, referincia o array
    referencia(valor, TAMANHO);
    printf("\nValor da funcao por referencia %d\n", valor[1]);
    
    //valor, cria uma copia do array
    valorFuncao(valorArray2[1]);
    printf("Valor da funcao por valor %d", valorArray2[1]);
    

    //Obs: passando const no tipo, ele impede a modificação do array dando um erro
    //na fase de compilação, por exempro "const int var[]..."
    return 0;
}

void referencia(int valor[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%3d", valor[i] *= 2);
    }
}

void valorFuncao(int n)
{
    printf("Valor da funcao passada por valor %d\n", n*= 2);
}