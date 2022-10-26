#include <stdio.h>

float minima = 2.00;
float taxa = 0.50;
float dia = 10.00;

float calculaTaxas(float);

int main() {
    int contador, qtdCarros;
    float totalHoras = 0, totalTaxa = 0;
    float tempo;
    
    printf("Digite a quantidade de carros:\n");
    scanf("%d", &qtdCarros);
    
    contador = 1;
    
    printf("Carro\t Horas Taxa\n");
    while (contador <= qtdCarros)
    {
        scanf(" %2f", &tempo);
        
        printf("%d\t ", contador);
        printf("%.2f\t ", tempo);
        printf("%.2f\t \n", calculaTaxas(tempo));
        
        totalHoras += tempo;
        totalTaxa += calculaTaxas(tempo);
        calculaTaxas(tempo);
        
        ++contador;
    }
    
     printf("_____________________\n");
    
    printf("TOTAL\t ");
    printf("%.2f\t ", totalHoras);
    printf("%.2f", totalTaxa);
    
    return 0;
}

float calculaTaxas(float horas)
{
    float total;
    
    if (horas < 3) 
        return total = minima;
    else if(horas >= 24)
        return total = dia;
    else if (horas <= 24)
        return total = minima + ((horas - 3) * taxa);
}