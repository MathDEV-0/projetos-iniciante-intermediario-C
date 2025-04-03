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
            tentativas++;
        }
        if(chute < resposta){
            printf("Um pouco mais...\n");
            tentativas++;
        }
        if(chute == resposta){
            tentativas++;
            printf("Parabéns, você acertou! Depois de %d tentativas viu que a resposta era %d!\n",tentativas,resposta);
            break;
        }
        
    }while(resposta!=chute);
    
    return 0;
}