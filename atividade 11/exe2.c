#include <stdio.h>
#include <string.h>

void imprimirMes(int numero)
{
    char *nomes_meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
                           "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    int dias_no_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (numero >= 1 && numero <= 12)
    {
        printf("Mes: %s\n", nomes_meses[numero - 1]);
        printf("Dias: %d\n", dias_no_mes[numero - 1]);
    }
    else
    {
        printf("Numero invalido. Por favor, digite um numero de 1 a 12.\n");
    }
}

main()
{
    int numero;
    printf("\nDigite um numero de 1 a 12: ");
    scanf("%d", &numero);

    imprimirMes(numero);
}