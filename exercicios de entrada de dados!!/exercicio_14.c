#include <stdio.h>

void main()
{
    float distancia;
    float gasolina;
    
    printf(" Digite sua distancia---> ");
    scanf("%f",&distancia);
    
    printf(" Digite a gasolina gasta---> ");
    scanf("%f",&gasolina);
    
    float consumo = distancia/gasolina;
    
    printf("Voce consumiu %f litros Km/l", consumo);
    
}