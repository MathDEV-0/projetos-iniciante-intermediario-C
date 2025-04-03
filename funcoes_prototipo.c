#include <stdio.h>

void ola(char[],int);

int main(){
    //Os compiladores de C geralmente não fazer verificação de correspondência de parâmetros
    //Argumentos faltando vão resultar em comportamento inesperado
    //A função protótipo causa um "flag" para alertar o erro ao computador se há argumentos faltando

    /*O QUE É?
    Uma função sem corpo, antes do main que certifica que as chamadas de função estejam com os argumentos corretos

    VANTAGENS:
    1. Mais fácil para navegar um programa com o main no topo
    2. Ajuda com o debbuging
    3. Geralmente utilizadas em arquivos de header
    */
    char nome[]= "Matheus";
    int idade=18;

    ola(nome,idade);

    return 0;
}

void ola(char nome[],int idade){
    printf("Olá, %s\n",nome);
    printf("Você tem %d anos de idade",idade);
}