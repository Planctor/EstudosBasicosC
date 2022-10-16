#include <stdio.h>

int main()  {
    float pi = 3.14159;
    float raio,diamentro, area;

    printf("Digite o valor do raio\n");

    /* f para numero decimal*/
    scanf("%f", &raio);

    /*diametro*/
    diamentro = ((pi * 2) / raio ) / pi;
    printf("O seu diametro e: %.3f\n", diamentro);

    /*Circuferencia */
    printf("A sua Circoferencia e: %.3f\n", (pi * 2) / raio );

    /*area*/
    area = pi * (raio * raio);

    /* '.2' numero de casas decimais depois do zero */
    printf("O seu Area e: %.3f\n", area);

    /*retorna caso dê tudo certo no codigo*/
    return 0;
}