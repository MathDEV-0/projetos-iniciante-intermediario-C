#include <stdio.h>

enum Dia{Dom=1,Seg=2,Ter=3,Quar=4,Qui=5,Sex=6,Sáb=7};//Constantes definidas, cada constante tem assimilação com um número inteiro, a primeira 0,segunda 1..., porém, ao atribuir valor após a declaração da const pode-se alterá-lo

int main(){
    //enum = um tipo de inteiro definido pelo usuário que deixam o programa mais legível, podemos declará-los dentro ou fora do 'main'
    enum Dia hoje= Sáb;

    //printf("%d",hoje);// enums NÃO são strings, mas podem ser tratados com inteiros
    
    /*if(hoje==1||hoje==7){
        printf("É fim de semana, bro!");
    }
    else{
        printf("Dia de semana :(");
    }*/
   if(hoje==Dom||hoje==Sáb){//Ao utilizar 'Dom' e 'Sáb' deixamos o código mais legível
    printf("É fim de semana, bro!\n");
   }
   else{
        printf("Dia de semana :(\n");
    }
}