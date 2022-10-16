#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    /*ELSE OSCILANTE, se a primeira condição for falsa ele pula o codigo ignorando o else, que faz referencia ao ultimo IF mencionado*/
    if (x < 10)
        if (y < 5)
        {
            printf("foi");
        }
        /*faz referencia ao ultimo IF*/
        else {
            printf("nao foi");
        }
        
    return 0;
}