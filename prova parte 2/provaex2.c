    #include <stdio.h>

    void main(){
    float velocidade;
    
    printf("coloque a velocidade em  km/h: ");
    scanf("%f", &velocidade);
    
    float vel = (velocidade /3.6);
    
    printf("a velocidade em m/s é: %f", vel);
    }