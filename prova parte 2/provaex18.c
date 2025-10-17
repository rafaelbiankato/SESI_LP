    #include <stdio.h>

    int maior_numero(int num1, int num2){
    if (num1 > num2){
    } else {
    }
    }

    int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int maior = maior_numero(a, b);
    printf("O maior numero entre %d e %d é %d\n", a, b, maior);
    }
