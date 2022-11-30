#include <stdio.h>
#include <string.h>
int main(){

    int i = 0, fr = 0, lp = 0, isi = 0, branco = 0, nulo = 0, voto, total;
    char vencedor[4];

    while (i == 0){
        printf("URNA ELETRONICA\n");
        printf("1. Candidato LP\n2. Candidato FR\n3. Candidato ISI\n4. Nulo\n5. Branco\n6. Encerrar\nEntre com o seu voto:\n");
        scanf("%d", &voto);
    switch(voto){
       case 1:
       system("cls");
       printf("Voce votou em LP\n\n");
       lp++;
       break;

       case 2:
        system("cls");
        printf("Voce votou em FR\n\n");
        fr++;
       break;

       case 3:
        system("cls");
        printf("Voce votou em ISI\n\n");
        isi++;
       break;

       case 4:
        system("cls");
        printf("Voce votou NULO\n\n");
        nulo++;
       break;

       case 5:
        system("cls");
        printf("Voce votou BRANCO\n\n");
        branco++;
       break;

       default:
        system("cls");
        printf("Digite a opção correta\n\n");
        break;
        }

        if(voto == 6){
           i++;
           total = lp + fr + isi + nulo + branco;

           if(lp > fr && lp > isi){

              strcpy(vencedor, "LP");
          }else if(fr > lp && fr > isi){
           strcpy(vencedor, "FR");
          }else if(isi > lp && isi > fr){
           strcpy(vencedor, "ISI");
          }else if(fr = lp && lp == isi){
          strcpy(vencedor,"EMPATE");
          }else if(fr = lp){
          strcpy(vencedor,"EMPATE");
          }else if(lp = isi){
          strcpy(vencedor,"EMPATE");
          }


           printf("Candidato LP: %d votos.\n", lp);
           printf("Candidato FR: %d votos.\n", fr);
           printf("Candidato ISI: %d votos.\n", isi);
           printf("Votos brancos: %f\n", branco/total);
           printf("Votos nulos: %f\n", nulo/total);
           printf("Vencedor foi: %s\n", vencedor);


        }





    }





}
