#include <stdio.h>

int main() {
    /*variaveis*/
    int contador, valor, total, quantidade, media;
    media = 0;
    total = 0;
    valor = 0;
    contador = 0;
    
    printf("digite o numero de alunos:\n");
    scanf("%d", &quantidade);

    while (quantidade == 0)
    {
        printf("Tente novamente um valor valido:\n");
        scanf("%d", &quantidade);
    }
    
    while (contador < quantidade)
    {
        printf("digite um valor:\n");
        scanf("%d", &valor);

        total = total + valor;
        contador = contador + 1;
    }

    media =  total / quantidade;
    /* '(float) media' conversor unario*/
    printf("A Media da turme e: %.1f", (float) media);

    return 0;
}