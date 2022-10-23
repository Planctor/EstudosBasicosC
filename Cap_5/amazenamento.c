#include <stdio.h>

static int d = 4; // variavel global

int func(); //prototipo

int main()
{
    // armazenamento automático - só funciona no escopo da função
    auto int a = 1;
    
    printf("Hello World %d\n", a);
    printf("%d\n", func());
    d++;
    printf("%d\n", d);

    //inicia novo escopo
    {
        int a = 3;
        printf("Hello World %d\n", ++a);
    }

    return 0;
}

// armazenamento estático -  armazenamento é alocado e inicializado
// existem 2 tipos, variaveis globais e funçoes
extern int func()
{
    //variavel gloval que faz parte apenas do escopo da função func
    static int e = 5;
    return e;
}
