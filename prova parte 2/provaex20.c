    #include <stdio.h>

    int maior_valor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
    if (vetor[i] > maior) {
    maior = vetor[i];
    }
    }
    return maior;
    }
    int main() {
    int n;

    printf("quantos elementos o vetor possui? ");
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
    printf("Digite o elemento %d: ", i + 1);
    scanf("%d", &vetor[i]);
    }
    int maior = maior_valor(vetor, n);
    printf("O maior valor no vetor é %d\n", maior);
    }