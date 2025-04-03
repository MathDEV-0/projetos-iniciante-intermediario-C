#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //pseudo aleatórios números= conjunto de número gerados aleatoriamente por estatística (Não utilizar para segurança e criptografia)

    srand(time(0));//seed random e passar como argumento o tempo atual, ao não utilizar a seed, os números sempre serão os mesmos
    
    int num1= (rand()% 20)+1;//A função rand vai de 0 a 32767, para parar em um número específico, utilizamos mod para ditar o limite, se temos um dado de 6 lados, então fazemos rand()%6,porém retorna o resto de uma divisão e como o computador vai de 0 a n então precisamos colocar o +1 para chegar a 6
    int num2= (rand()% 20)+1;
    int num3= (rand()% 20)+1;

    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);

    return 0;
}