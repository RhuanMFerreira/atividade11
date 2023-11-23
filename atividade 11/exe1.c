#include <stdio.h>

int maiorNumero(int numero1, int numero2)
{
    if (numero1 > numero2)
    {
        return numero1;
    }
    else
    {
        return numero2;
    }
}

main()
{
    int num1 = 10;
    int num2 = 20;

    int maior = maiorNumero(num1, num2);

    printf("O maior numero entre %d e %d é: %d\n", num1, num2, maior);
}