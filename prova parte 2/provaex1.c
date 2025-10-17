    #include <stdio.h>

    void main(){
    float graus;
    
    printf("coloque os graus em celsius: ");
    scanf("%f", &graus);
    
    float fahrenheit = (graus * 9.0 / 5.0) + 32.0;
    
    printf("a temperatura em fahrenheit é: %f", fahrenheit);
    }