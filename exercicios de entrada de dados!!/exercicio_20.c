#include <stdio.h>

void main()
{
    char nome[100];
    int idade;
    char profissao[100];
    
    printf("digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua profissao: ");
    scanf("%s", profissao);
    
    printf("Nome: %s\nIdade: %d\nProfissão: %s\n", nome, idade, profissao);
}