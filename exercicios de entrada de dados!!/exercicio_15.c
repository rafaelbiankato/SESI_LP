#include <stdio.h>

void main()
{
    float horas;
    
    printf("Digite a quantidade de horas: ");
    scanf("%f", &horas);
    
    float minutos = horas * 60;
    float segundos = minutos * 60;
    
    printf("Quantidade de horas: %f\nminutos: %f\nsegundos: %f", horas, minutos, segundos);
}