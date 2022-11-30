#include <stdio.h>;
#include <string.h>;

int main() {
int idade,op,opd;
int b1c1 = 0, b1c2 = 0,b1c3 = 0,b2c1 = 0,b2c2 = 0,b2c3 = 0,b3c1 = 0,b3c2 = 0, b3c3 = 0,b4c1 = 0,b4c2 = 0,b4c3 = 0;
int carr,total,cal,i;

printf("DEPOSITO DE BEBIDA LISBOA\n");
printf("Qual sua idade para prosseguimos?\n");
scanf("%d",&idade);
if(idade < 18){
    printf("Voce nao tem idade suficiente para prosseguir\n");
}else{
    while(i == 0){
    printf("Qual bebida voce deseja comprar?\n1-CERVEJA\n2-Vodka\n3-WHISKY\n4-VINHO\n6-CARRINHO\n");
    scanf("%d",&op);
    switch(op){
case 1:
    printf("CERVEJA\nMARCA 1: R$3,00\nMARCA 2: R$4,00\nMARCA 3: R$5,00\n");
    scanf("%d",&opd);
    switch(opd){
    case 1:
    b1c1++;
    break;

    case 2:
    b1c2++;
    break;

    case 3:
    b1c3++;
    break;
}
break;
case 2:
    printf("VODKA\nMARCA 1: R$30,00\nMARCA 2: R$80,00\nMARCA 3: R$100,00\n");
    scanf("%d",&opd);
    switch(opd){
    case 1:
    b2c1++;
    break;

    case 2:
    b2c2++;
    break;

    case 3:
    b2c3++;
    break;
    }
break;

case 3:
    printf("WHISKY\nMARCA 1: R$100,00\nMARCA 2: R$120,00\nMARCA 3:R$130,00\n");
    scanf("%d",&opd);
    switch(opd){
    case 1:
    b3c1++;
    break;

    case 2:
    b3c2++;
    break;

    case 3:
    b3c3++;
    break;
    }
break;

case 4:
    printf("VINHO\nMARCA 1: R$20,00\nMARCA 2: R$ 150,00\nMARCA 3: R$10.000,00");
    scanf("%d",&opd);
    switch(opd){
    case 1:
    b4c1++;
    break;

    case 2:
    b4c2++;
    break;

    case 3:
    b4c3++;
    break;
    }
break;

default:
printf("DIGITE UMA ENTRADA VALIDA");
break;
    }



}
if(carr == 6){
    i++;
    total = b1c1 + b1c2 + b1c3 + b2c1 + b2c2 + b2c3 + b3c1 + b3c2 + b3c3 + b4c1 + b4c2 + b4c3;

    if(op > 5){
      cal = (10 * total)/100;
    printf("Com desconto de 10% fica %d",cal);
    }else if(op > 10){
     cal = (20 * total)/100;
    }

    printf("O valor total da compra é %d",total);

}

}
}
