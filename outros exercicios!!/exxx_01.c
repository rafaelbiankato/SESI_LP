#include <stdio.h>

    void main() {
	int valores[5];

	for(int i=0; i < 5; i++){
	printf("Digite o valor de %d\n", i+1);
	scanf("%d", &valores[i]);
	}

    printf("Exiba o Valor:\n");
    
	for(int i=0; i <= 4; i++) {
	printf("Valor de %d: %d\n",i+1, valores[i]);
	}
}