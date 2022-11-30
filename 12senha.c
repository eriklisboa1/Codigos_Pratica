#include <stdio.h>
#include <string.h>

int main(){

char senha,senhaex;

senhaex = "12345alguem";

printf("Digite a senha:\n");
scanf("%c",senha);

if (senha != senhaex){
    printf("Voce digitou a senha errada");
}else{
printf("Voce digitou a senha correta");
}


}
