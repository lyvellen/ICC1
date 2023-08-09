#include <stdio.h>

#define DESCONTO_AVISTA 0.85         //constantes com o valor dos descontos. 
#define DESCONTO_PREDATADO 0.90

    void mostrarOpcoesPagamento() {   //função para exibir as opções de pagamento 
        printf("Temos três formas de pagamento, escolha de acordo com a numeração\n");
        printf("1- Pagamento à vista\n");
        printf("2- Pagamento com cheque pré-datado\n");
        printf("3- Pagamento parcelado\n");

    }

int main() {    
        int tipogmt, parcela;
        float compra;

         printf("Vamos calcular descontos, acréscimos e parcelas de acordo com o tipo de pagamento.\n");
         printf("Insira o valor da sua compra R$:\n");
         scanf("%f", &compra);

         mostrarOpcoesPagamento();
         scanf("%d", &tipogmt);

         switch(tipogmt) {           
            case 1: 
            printf("O valor da sua compra nessa condição de 15/100 = R$ %.2f\n", compra*DESCONTO_AVISTA);
            break;
            case 2:
            printf("O valor da sua compra nessa condição tem desconto de 10/100 = R$ %.2f\n", compra * DESCONTO_PREDATADO);
            break;
            case 3:
            printf("Escolha a quantidade de parcelas entre 3, 6 ou 12:\n");
            scanf("%d", &parcela);
              
          //inicio do bloco de condições especificado no exercicío. 
              
            if(parcela==3){ 
            float valorParcela = compra * 0.95/3;
            printf("Sua compra inicial foi R$%.2f\n", compra);
            printf("Sua compra final foi R$%.2f\n", compra * 0.95);
            printf("Suas parcelas ficam dividas em três vezes de R$%.2f\n", valorParcela);
            printf("Houve um desconto de R$%.2f\n", compra -(valorParcela * 3));

             } else if (parcela == 6) {
                printf("Sua compra inicial foi R$%.2f\n", compra);
                printf("Sua compra final foi R$%.2f\n", compra);
                printf("Suas parcelas ficam divididas em seis vezes de R$%.2f\n", compra / 6);
                printf("Não há desconto para essa condição\n");
            } else if (parcela == 12) {
                float valorParcela = compra * 1.08 / 12;
                printf("Sua compra inicial foi R$%.2f\n", compra);
                printf("Sua compra final foi R$%.2f\n", compra * 1.08);
                printf("Suas parcelas ficam divididas em doze vezes de R$%.2f\n", valorParcela);
                printf("Não há desconto para essa condição\n");
            } else {
                printf("Número de parcelas inválido.\n");
            }
            break;
        default:
            printf("Opção de pagamento inválida.\n");
            break;
         }


}
