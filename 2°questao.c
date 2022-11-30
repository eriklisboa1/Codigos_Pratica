#include <stdio.h>

int main(){
int c,a1,cal,op;
int numero = 1;

printf("QUAL DAS OPÇÕES VOCE DESEJA FAZER ?\n1-SOMA\n2-MULTIPLICACAO\n3-DIVISAO\n4-SUBTRACAO\n5-ENCERRAR\n");
scanf("%d", &op);
switch(op){
case 1:
    printf("Diga um numero para mostrar a tabuada do mesmo");
scanf("%d", &a1);
for(c = 1; c <= 10;c=c + 1){
    cal = c + a1;
    printf("%d + %d = %d\n",c, a1,cal);
}
break;
case 2:
printf("Diga um numero para mostrar a tabuada do mesmo");
scanf("%d", &a1);
for(c = 1; c <= 10;c=c + 1){
    cal = c * a1;
    printf("%d x %d = %d\n",c, a1,cal);
}
break;
case 3:
printf("Diga um numero para mostrar a tabuada do mesmo");
scanf("%d", &a1);
for(c = 1; c <= 10;c=c + 1){
    cal = c / a1;
    printf("%d / %d = %d\n",c, a1,cal);
}
break;
case 4:
printf("Diga um numero para mostrar a tabuada do mesmo");
scanf("%d", &a1);
for(c = 1; c <= 10;c=c + 1){
    cal = c - a1;
    printf("%d - %d = %d\n",c, a1,cal);
}
break;
case 5:
    return 0;
    break;
default:
    printf("DIGITE UMA OPCAO VALIDA");
break;


}
}
