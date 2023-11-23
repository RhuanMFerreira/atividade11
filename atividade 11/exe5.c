#include <stdio.h>

float calcularVolumeEsfera(float raio)
{
    float pi = 3.1414592;
    float volume = (4.0 / (3.0 * pi * raio * raio * raio));
    return volume;
}

main()
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    float volume = calcularVolumeEsfera(raio);

    printf("O volume da esfera é: %.2f unidades cubicas\n", volume);
}