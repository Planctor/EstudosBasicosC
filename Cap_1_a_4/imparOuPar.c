#include <stdio.h>

int main() {
    /*variaveis*/
    int valor;

    printf("Digite um valor:\n");
    scanf("%d", &valor);

    /*verifica se tem resto ou não, se tiver vai ser true, ou seja par*/
    if (valor % 2)
    {
       printf("E impar");
    } 
    else {
        printf("E par");
    }
    
    return 0;
}