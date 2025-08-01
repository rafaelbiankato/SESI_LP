#include <stdio.h>

    void main(){
    float cm = 0;
    float m = 0;
    
    printf("digite um valor em cm:");
    scanf("%f", &cm);
    m = cm / 100;
     printf("CM: %.2f -> M: %.2f\n", cm, m);
}