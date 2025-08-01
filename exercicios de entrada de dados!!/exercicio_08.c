#include <stdio.h>

int main() {
    float distancia, tempo, velocidade_media;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

 
    velocidade_media = distancia / tempo;

    printf("Velocidade média: %.2f km/h\n", velocidade_media);
}