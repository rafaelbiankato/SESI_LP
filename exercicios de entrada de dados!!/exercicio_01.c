#include <stdio.h>

void main(){
    char nome[255] = "";
    printf("digite seu nome: ");
    scanf("%s",nome);
    printf("Olá, %s! Seja bem-vindo ao mundo da programação em C!", nome);
}