#include <stdio.h>

    void main(){
	int valores[10];
	int soma = 0;
	
	for(int i=0; i < 10; i++){
	printf("Digite o valor de %d:\n", i+1);
	scanf("%d", &valores[i]);
	}
	for(int i=0; i < 10; i++){
	soma = soma + valores[i];
	}
	printf("A soma de todos os valores: %d\n", soma);
	}
