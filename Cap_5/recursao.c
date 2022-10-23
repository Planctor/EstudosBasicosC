#include <stdio.h>

int recursao(int);

int main()
{
    printf("%d\n", recursao(5));
    return 0;
}

 //recurção, consiste em chamar retorna a função em si mesma
int recursao(int valor)
{
    int total = valor; //atribuindo o primeiro valor a variavel

    if (valor == 1) //verificação
    {
        return valor = 1; //aqui para a recurção, evitando loop infinito
    } 
    
    //retorno a mesma função, subtraindo o valor atual até chegar 1, definido acima
    //
    return total *= recursao(valor - 1);
}
