    #include <stdio.h>

    int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade < 5){
        printf("Voce nao pode competir!");
    } else if (idade <= 7){
        printf("Voce é do infantil A!\n");
    } else if (idade <= 10){
        printf("Voce é do infantil B!\n");
    } else if (idade <= 13 ){
        printf("Voce é do juvenil A!\n");
    } else if (idade <= 17 ){
        printf("Voce é do juvenil B!\n");
    } else{
        printf("Voce é senior!");
    }
    }
    
    