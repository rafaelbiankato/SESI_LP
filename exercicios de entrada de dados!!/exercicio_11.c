#include <stdio.h>

void main ()
{
    int altura;
    int base;
    
    printf("Digite a altura: ");
    scanf("%d", &altura);
    
    printf("Digite a base: ");
    scanf("%d", &base);
    
    int area = base * altura; 
    printf("sua area é:%d ", area );
 }