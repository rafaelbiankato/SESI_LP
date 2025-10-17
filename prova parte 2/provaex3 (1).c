    #include <stdio.h>

    void main(){
    
    float angulo;
    
    printf("coloque o valor do angulo: ");
    scanf("%f", &angulo);
    
    float graus = (angulo * 180/3.14);
    
    printf("o angulo em graus é: %2.f", graus);
    
    }