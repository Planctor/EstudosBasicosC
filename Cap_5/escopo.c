#include <stdio.h>

int x = 1;

void escopo();

int main()
{
    //escopo 1
    printf("%d\n", x);

    //escopo 2
    {
        int x = 2;
        printf("%d\n", x);
    }

    //escopo 3
    escopo();

    return 0;
}

void escopo()
{
    int x = 3;
    printf("%d\n", x);
}
