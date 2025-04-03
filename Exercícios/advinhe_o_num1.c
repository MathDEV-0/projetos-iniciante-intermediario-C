#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int chute;
    int tentativas;
    const int MIN=1;
    const int MAX=10;

    srand(time(0));

    int resposta= (rand() % MAX) + MIN;

    do{
        printf("Digite um número de 1 a 10: ");
        scanf("%d",&chute);
        if(chute > resposta){
            printf("Um pouco menos...\n");
        }
        else if(chute < resposta){
            printf("Um pouco mais...\n");
        }
        else{
            printf("Correto!\n");
        }
        tentativas++;
    }while(resposta!=chute);

    printf("**********************\n");
    printf("RESPOSTA: %d\n",resposta);
    printf("TENTATIVAS: %d\n",tentativas);
    printf("**********************\n");

    return 0;
}