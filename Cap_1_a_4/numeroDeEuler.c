#include <stdio.h>

int main()
{
    int cont, entrada, salvarValor;
    float soma;
    float total = 1;
    cont = 0;
   
    salvarValor = entrada;
    while (cont < 15) {
        ++cont;
       
        entrada = cont;
        salvarValor = cont;
        while (0 < entrada)
        {  
            soma = salvarValor;
            --entrada;
            salvarValor = salvarValor * entrada;
        }


        total =  total + (1 / soma);
        printf("%.10f\n", total);
    }
   
    return 0;
}