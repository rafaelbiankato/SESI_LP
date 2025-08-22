#include <stdio.h>

    int main() {
    int numeros[5];
    int numeros_ordenados[5];
    int i, y;

    for (i = 0; i < 5; i++){
        printf("digite o valor de %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("- - - - - - - -\n");

    for (i = 0; i < 5; i++) {
        numeros_ordenados[i] = numeros[i];
    }

    for (i = 0; i < 5; i++) {
    for (y = 0; y < 4; y++) {
    if (numeros_ordenados[y] > numeros_ordenados[y + 1]){
    int temp = numeros_ordenados[y];
    numeros_ordenados[y] = numeros_ordenados[y + 1];
    numeros_ordenados[y + 1] = temp;
    
    }
    }
    }

    printf("- - - - - - - - -\n");

    for (i = 0; i < 5; i++){
        printf("%d\n", numeros_ordenados[i]);
    }

    }