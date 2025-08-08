#include <stdio.h>

float main()
{
    int valor1;
    int valor2;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &valor1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &valor2);
    
    int soma = valor1 + valor2;
    int menos = valor1 - valor2;
    int multi = valor1 * valor2;
    float divisao = valor1 / valor2;
    
    printf("%d + %d = %d\n", valor1, valor2, soma);
    printf("%d - %d = %d\n", valor1, valor2, menos);
    printf("%d x %d = %d\n", valor1, valor2, multi);
    printf("%d / %d = %f\n", valor1, valor2, divisao);
}