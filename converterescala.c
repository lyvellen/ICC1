#include <stdio.h>

//constantes para as conversões

#define KELVIN_PARA_CELSIUS 273.15
#define FAHRENHEIT_PARA_CELCIUS_FATOR (5.0/9.0)
#define KELVIN_PARA_FAHRENHEIT_FATOR (9.0/5.0)
#define KELVIN_PARA_FAHRENHEIT_BALANCO 32.0

int main () {
    int opcao;
    float  valor, resultado;

    printf("1-Kelvin para Celsius, 2-Fahrenheit para Celsius, 3-Kelvin para Fahrenheit\n");
    scanf("%d", &opcao);
    printf("Insira o valor que quer transformar:\n");
    scanf("%f", &valor);

    switch(opcao) {
        case 1:
        resultado = valor - KELVIN_PARA_CELSIUS;
        printf("Sua transformação de Kelvin para Celsius é: %.2f", resultado);
        break;
        case 2:
        resultado = (valor - 32) * FAHRENHEIT_PARA_CELCIUS_FATOR;
        printf("Sua transformação de Fahrenheit para Celsius é: %.2f\n", resultado);
        break;
        case 3:
        resultado = (valor - KELVIN_PARA_CELSIUS) * KELVIN_PARA_FAHRENHEIT_FATOR + KELVIN_PARA_FAHRENHEIT_BALANCO;
        printf("Sua transformação de Kelvin para Fahrenheit é: %.2f", resultado);
        break;
        default:
         printf("Opção inválida.\n");
    }
return 0;
}
