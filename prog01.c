#include <stdio.h>
#include <stdlib.h>

int calc_fat(int);

int main()
{
    system("chcp 65001>null"); //Configuração para UFT-8 no windows
    
    int numero = 5;
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %d", numero, num_fat);
    return 0;
}

int calc_fat(int b)
{
    int fatorial = 1;
    for (int contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %d", fatorial);
    }
    return fatorial;
}