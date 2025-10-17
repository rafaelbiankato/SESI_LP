    #include <stdio.h>

    void main(){
    
    float preço;
    float aumento;
    
    printf("Digite o preço antigo: ");
    scanf("%f", &preço);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &aumento);
    
    float valoraumento = preço * aumento /100;
    float preçofinal = preço + valoraumento;
    
    printf("Valor aumentado: %f\nNovo valor: %f",valoraumento,preçofinal);
    
    }
