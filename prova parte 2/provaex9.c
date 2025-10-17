    #include <stdio.h>

    void main(){
    
    float a;
    float b;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    
   
    
    if (a > b){
        printf("O maior numero é: %d", a);
    } else if (b > a){
        printf("O maior numero é: %d", b);
    }
    }
    