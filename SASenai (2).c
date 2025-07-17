#include <stdio.h>
 
char nome [10];
int temp [10];
int minima, maxima;
int tempOk = 0;


int main(){

printf("\t---Controle de Temperatura_ Equipamentos---\n\n");
printf("Nome | Usuário.: ");
scanf("%s", &nome[10]);
  
  printf("Digite Temperatura Máxima.:");
   scanf("%d", &maxima);
  printf("Digite Temperatura Minima.:");
   scanf("%d", &minima);

  
  for(int i = 0; i < 10;i++){
    printf("\nTemperatura dia %d .: ",i+1);
    scanf("%d", &temp[i]);
  }
  
  for(int i = 0; i < 10;i++){
     if(temp[i] >= minima && temp[i]<= maxima){
        printf("\n\nTemperatura.: %d ",temp[i]);
        tempOk++;
       printf("\n\nOk.: %d",tempOk);
     }  
     else{
         if(temp[i] < minima || temp[i] > maxima){
             printf("\n\nCuidado!! Risco_\nTemperatura Fora do Limite! Temperatura.: %d", temp[i]);
         }
     }
  }
}

  



