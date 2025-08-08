#include <stdio.h>

    void main(){
    char nome[100] = "";
    float salario = 0;
    int meses = 0;
    float total = 0;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite os meses trabalhados: ");
    scanf("%d", &meses);
    
    total = meses * salario;
    
    printf("Funcionario %s ganhou R$ %.2f em %d meses.\n", nome, total, meses);
}