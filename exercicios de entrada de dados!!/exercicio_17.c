#include <stdio.h>

void main()
{
    int a;
    int b;
    int c;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    
    int soma = a + b + c;
    int media = (a + b + c) / 3;
    
    printf("%d + %d + %d = %d\n", a, b, c, soma);
    printf("(%d + %d + %d) / 3 = %d\n", a, b, c, media);
    
    if (a > b,c) {
        printf("o maior numero é: %d", a);
    } else if (b > a,c) {
        printf("o maior numero é: %d", b);
    } else {
        printf("o maior numero é: %d", c);
    }
}