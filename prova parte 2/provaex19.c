    #include <stdio.h>
    void desenhaLinha(int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("=");
    }
    printf("\n");  
    }

    int main() {
    int n;

    printf("Quantos sinais de igual você quer na linha? ");
    scanf("%d", &n);

    desenhaLinha(n);
    }
