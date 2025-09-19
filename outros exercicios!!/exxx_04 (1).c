    #include <stdio.h>

    void main(){
	int valores[6];
	int soma = 0;
    float media = 0;
    
	for(int i=0; i < 6; i++) {
	printf("Digite o valor de %d:\n", i+1);
	scanf("%d", &valores[i]);
	}
	for(int i = 0; i < 6; i++){
	soma = soma + valores[i];
	}
	
	media = soma / 6;

	printf("A media e: %2.f", media);
    }