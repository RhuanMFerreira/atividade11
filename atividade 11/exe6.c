#include <stdio.h>

float calcularIMC(float peso, float altura)
{
    float imc = peso / (altura * altura);
    return imc;
}

main()
{
    float peso, altura;

    printf("Digite o peso em quilos: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    float imc = calcularIMC(peso, altura);

    printf("O IMC é: %.2f\n", imc);
}