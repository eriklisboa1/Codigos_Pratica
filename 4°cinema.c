# include <stdio.h>
#include <string.h>


int main(){

int idade;
int op;

printf("CINEMA LISBOA\n");
printf("FILMES:\n1-VINGADORES -12\n2-Top Guns Maverick -15\n3-Creeds -18 3\n4-Aquaman -12\n5-THE FLASH -12\n");
scanf("%d", &op);
switch(op){
case 1:
    system("cls");
    printf("FILME ESCOLHIDO - VINGADORES\nRestricao de idade -12\n");
    printf("Quanto anos voce tem?\n");
    scanf("%d", &idade);
    if(idade < 12){
        printf("Voce nao tem idade suficiente para assistir este filme");
    }else{
    printf("Voce tem idade para assistir, pode prosseguir");
    }
    break;

case 2:
    system("cls");
    printf("FILME ESCOLHIDO - TOP GUNS MAVERICK\nRestricao de idade -15\nQuanto anos voce tem?\n");
    scanf("%d", &idade);
    if(idade < 15){
     printf("Voce nao tem idade suficiente para assistir este filme");
    }else{
    printf("Voce tem idade para assistir, pode prosseguir");
    }
    break;

case 3:
    system("cls");
    printf("FILME ESCOLHIDO - Creeds\nRestricao de idade -13\nQuanto anos voce tem?\n");
    scanf("%d", &idade);
    if(idade < 13){
     printf("Voce nao tem idade suficiente para assistir este filme");
    }else{
    printf("Voce tem idade para assistir, pode prosseguir");
    }
    break;

case 4 :
    system("cls");
    printf("FILME ESCOLHIDO - Aquaman\nRestricao de idade -12\nQuanto anos voce tem?\n");
    scanf("%d", &idade);
    if(idade < 12){
     printf("Voce nao tem idade suficiente para assistir este filme");
    }else{
    printf("Voce tem idade para assistir, pode prosseguir");
    }
    break;

case 5:
        system("cls");
    printf("FILME ESCOLHIDO - The Flash\nRestricao de idade -13\nQuanto anos voce tem?\n");
    scanf("%d", &idade);
    if(idade < 12){
     printf("Voce nao tem idade suficiente para assistir este filme");
    }else{
    printf("Voce tem idade para assistir, pode prosseguir");
    }
    break;

default:
    printf("Escolha uma opcao correta");
    break;

}

}
