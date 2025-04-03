#include <stdio.h>

int findMax(int x,int y){
    /*AO INVÉS DE FAZER TUDO ISSO
    if(x>y){
    return x;}
    else return y

    PODEMOS UTILIZAR O OPERADOR TERNÁRIO E SIMPLIFICAR
    */

   return (x>y) ? x : y; // retorna se (x>y) verdadeiro, então x, se não, y.
}

int main(){
    //Operador ternário:um atalho de um if/else quando vai retornar um valor
    // Sintaxe: (condição)? valor se verdadeiro: valor se falso;

    int max= findMax(6,4);
    
    printf("%d",max);

    return 0;
}