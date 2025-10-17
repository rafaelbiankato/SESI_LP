    #include <stdio.h>

    void data_por_extenso(int dia, int mes, int ano){
    char * meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    if(mes >= 1 && mes <= 12){
    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
    } else {
    printf("Mês inválido\n");
    }
    }

    int main() {
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    data_por_extenso(dia, mes, ano);
    }