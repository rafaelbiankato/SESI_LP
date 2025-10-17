    #include <stdio.h>

    int main() {
    printf("Vamos contar de trás pra frente, só os números ímpares, de 1000 até 1!\n");

    for (int i = 999; i >= 1; i -= 2) { // começa do 999 que é o maior ímpar <= 1000
    printf("%d\n", i);
    }

    printf("É isso aí, terminou a contagem!\n");
    return 0;
    }
