#include <stdio.h>

int main() {
    int numero = 0;
    int i;

    printf("Qual tabuada vc quer? %d\n", numero);
    scanf("%d", &numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

}