#include <stdio.h>

int main()
{
    int auxiliar;
    int min;
    int arr[] = {2,1,34,4,42,4,23,32,32};
        
    for(int cont = 0; cont < 9; cont++)
    {
        min = cont;
        for(int cont2 = min + 1; cont2 < 9 ;cont2++)
        {
            if(arr[min] > arr[cont2])
            {
                auxiliar = arr[min];
                arr[min] = arr[cont2];
                arr[cont2] = auxiliar;
            }
        }
    }
    
    for(int cont = 0; cont < 9; cont++)
    {
        printf("%d\n", arr[cont]);
    }    
    
    return 0;
}
