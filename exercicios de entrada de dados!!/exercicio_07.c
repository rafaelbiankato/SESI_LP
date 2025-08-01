#include <stdio.h>

int main() {
    char nome[100];
    float preco_unitario;
    float quantidade_comprada;

    printf("Digite o nome do produto: ");
    scanf(" %s", nome);

    printf("Digite o preço unitário: R$ ");
    scanf("%f", &preco_unitario);

    printf("Digite a quantidade comprada: ");
    scanf("%f", &quantidade_comprada);

    float valor_total_a_ser_pago = preco_unitario * quantidade_comprada;

    printf("\n produto: %s\n", nome);
    printf("total a pagar: R$ %.2f\n", valor_total_a_ser_pago);
}