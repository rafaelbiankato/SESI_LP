#include <stdio.h>

void main ()
{
    int num1;
    
    printf("Digite seu numero: ");
    scanf("%d",&num1);
    
    int sucessor = num1 + 1;
    int antecessor = num1 - 1;
    
    printf("seu número é:%d\nantecessor: %d\nsucessor: %d",num1, antecessor, sucessor);
    
}