#include <stdio.h>

void main()
{
    float preço;
    float desconto;
    
    printf("Digite o preço: ");
    scanf("%f", &preço);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);
    
    float valordesconto = preço * desconto /100;
    float preçofinal = preço - valordesconto;
    
    printf("Valor descontado: %f\nnovo valor: %f",valordesconto,preçofinal);
    
}