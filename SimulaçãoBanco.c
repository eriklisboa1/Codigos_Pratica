#include <stdio.h>

int main(){

 int resu,saq;
 printf("1-SALDO EM CONTA CORRENTE\n2-EXTRATO BANCARIO\n3-SACAR DINHEIRO\n4-TRANSFERENCIA\n5-SAIR\n");
 scanf("%d", &resu);
 switch(resu){
 case 1:

        printf("SALDO EM CONTA\nSua conta bancaria tem 10000000000 kwanzas");
        break;
        case 2:
        printf("EXTRATO BANCARIO\nNENHUMA MOVIMENTAÇÃO REGISTRADA");
        break;
case 3:
        printf("SACAR DINHEIRO\QUANTO VOCE DESEJA SACAR?");
        scanf("%d", saq);
        printf("Voce sacou %d",saq);
        break;
case 4:
        printf("TRANSFERENCIA\nPARA QUAL CONTA VOCE DESEJA TRANSFERIR?");
        break;
case 5:
    return 0;
    break;
default:
    printf("Digite uma opção valida");
 }



}
