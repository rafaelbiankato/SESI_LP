#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("digite a primeira nota:");
    scanf("%f", &nota1);

    printf("digite a segunda nota:");
    scanf("%f", &nota2);

    printf("digite a terceira nota:");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\n a média das notas é: %.2f\n" ,media);

}