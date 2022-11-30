#include <stdio.h>;
#include <direct.h>
#include <math.h>;

int main(){

int op;
double potencia = 0,n;
float x,y;


printf("Digite um numero para fazer as operacoes:\n");
scanf("%f",&x);
system("cls");

printf("ESCOLHA QUAL OPERACAO VOCE DESEJA FAZER COM ESTE DADOS:\n1-RAIZ QUADRADA\n2-POTENCIACAO\n");
scanf("%d",&op);
switch(op){
case 1:
    system("cls");
  y= sqrt(x);
  printf("A raiz quadrada desse numero e %f\n",y);
    break;
case 2:
    system("cls");
    potencia = pow(x,2);
    printf("A potenciacao desse valor e de %2.f\n",potencia);
    break;
}











}
