#include <stdio.h>

void main()
{
    int dolar;
    float cotação;
    
    printf("Quantos dolares voce tem: ");
    scanf("%d", &dolar);
    
    printf("Quanto o dolar está valendo em real: ");
    scanf("%f", &cotação);
    
    float converção = dolar * cotação;
    
    printf("voce converteu %d dolares em %f reais", dolar, converção);
}