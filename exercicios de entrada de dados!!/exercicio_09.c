#include <stdio.h>

void main()
{
    float graus;
    
    printf(" insira graus: ");
    scanf("%f", &graus);
    
    float fahrenheit = (graus * 1.8) + 32;
    
    printf(" Seu resultado em fahrenheit é: %f", fahrenheit);
    
}