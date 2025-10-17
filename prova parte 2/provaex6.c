    #include <stdio.h>

    void main(){
    // 1 - Janeiro
    // 2 - Fevereiro
    // 3 - Março
    // 4 - Abril
    // 5 - Maio
    // 6 - Junho
    // 7 - Julho
    // 8 - Agosto
    // 9 - Setembro
    // 10 - Outubro
    // 11 - Novembro
    // 12 - Dezembro
    
    int mes_ano = 0;
    
    printf("digite o numero do mes:");
    scanf("%d", &mes_ano);
    
    switch(mes_ano){
    case 1 :printf("\njaneiro");
    break;
    case 2 :
    printf("\nfevereiro");
     break;
    case 3 :
    printf("\nmarco");
     break;
    case 4 :
    printf("\nabril");
     break;
    case 5 :
    printf("\nmaio");
     break;
    case 6 :
    printf("\njunho");
     break;
    case 7 :
    printf("\njulho");
     break;
      case 8 :
    printf("\nagosto");
     break;
      case 9 :
    printf("\nsetembro");
     break;
      case 10 :
    printf("\noutubro");
     break;
      case 11 :
    printf("\nnovembro");
     break;
      case 12 :
    printf("\ndezembro");
     break;
    default:
    printf("\n O numero do mes esta invalido!");
    }
    }