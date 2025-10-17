    #include <stdio.h>

    void main(){
    int numero;
    
    printf("digite um numero: ");
    scanf("%d",&numero);
    
    int sucessor = numero + 1;
    int antecessor = numero - 1;
    
    printf("seu número é: %d\nantecessor: %d\nsucessor: %d",numero, antecessor, sucessor);
    
    }