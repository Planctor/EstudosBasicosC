#include <stdio.h>

void passandoValor(int [], int); 

int main()
{
    //string são simplesmente array de caracteres
    char nome[] = "Seu nome";
    char nomeA[] = {'S','e','u',' ','n','o','m','e','\0'}; // \0 define o fim da string, sem ele n da pra identificar o fim da array
    char digiteSeuNome[] = {0};
    
    int v[] = {1,2,3,4,5};
    //static int valor[]; 
    //array estatico sempre inicia com zero

    printf("%s\n",nome);
    printf("%s\n", nomeA);
    //printf("%d\n", valor);

    printf("Digite seu nome:\n");
    scanf("%s", digiteSeuNome);

    //ENDEREÇOS

    //p envia endereços hexadecimal(base 16)
    //& entrega o resultado do endereço da memoria, (ponteiro)
    printf("%p\n", &nome[1]);
    printf("%p", nome);

    //PASSANDO ARRAY EM UMA FUNÇÃO
    passandoValor(v, 2);
    
    return 0;      
}

void passandoValor(int valor[],int n)
{
    printf("%d", valor[n]);
}