#include <stdio.h>
#include <string.h>

int main(){
    char carros[][10]={"Mustang","Corvette","Camaro"};

    //carros[0]="Tesla"; //Não funcionaria, pois um array de string é uma matriz, já que strings são arrays de caracteres com '\0' no final
    strcpy(carros[0],"Tesla"); //Então utilizamos a função copy

    for(int i=0;i<sizeof(carros)/sizeof(carros[0]);i++){
        printf("%s\n",carros[i]);
    }

    return 0;
    
}