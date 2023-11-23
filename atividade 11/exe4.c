#include <stdio.h>

float calcularVolumeCilindro(float altura, float raio)
{
    float pi = 3.1414592;
    float volume = pi * raio * raio * altura;
    return volume;
}

main()
{
    float altura, raio;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    float volume = calcularVolumeCilindro(altura, raio);

    printf("O volume do cilindro é: %.2f unidades cúbicas\n", volume);
}