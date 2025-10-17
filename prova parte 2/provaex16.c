    #include <stdio.h>

    int dobro(int num) {
    return num * 2;
    }

    int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int resultado = dobro(numero);
    printf("O dobro de %d é %d\n", numero, resultado);
    }
