#include <stdio.h>
#include <string.h>

typedef char user[25];

int main(){
    //typedef= palavra reservada que serve como 'apelido' para uma estrutura de dados existente

    //char user1[25]="Bob";

    user user1= "Bob";
    user user2= "Bill";
     
    printf("%s\n",user1);
    printf("%s\n",user2);

    return 0;
}