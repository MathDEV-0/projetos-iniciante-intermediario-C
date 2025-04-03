#include <stdio.h>

int main(){
    //Utilizamos break para interromper um ciclo
    //Utilizamos continue para pular para a próxima iteração

    for(int i=1;i<=20;i++){
        if(i==13){
            continue; //Pula o 13
        }
        if(i==19){
            break;
        }
        printf("%d\n",i);
    }
}