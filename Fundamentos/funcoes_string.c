#include <stdio.h>
#include <string.h>

int main(){
    char string1[]= "Bro";
    char string2[]= "Code";

    //MANIPULAÇÃO:

    //strlwr(string1);//Converte a string com todas as letras minúsculas
    
    //strupr(string1);//Converte a string com todas as letras maiúsculas
    
    //strcat(string1,string2);//Concatena a string2 ao final da string1
    
    //strncat(string1,string2,1);//Concatena n caracteres da string2 para o final da string 1
    
    //strcpy(string1,string2);//Copia a string2 para a string1
    
    //strncpy(string1,string2,2);//Copia n caracteres da string2 para a string1
    

    //strset(string1,'?'); //Define todos os caracteres de string para o caractere escolhido no argumento

    //strnset(string1,'x',1);//Define os primeiros n caracteres de uma string para um caractere escolhido no argumento

    //strrev(string1); //Inverte uma string 

    //printf("%s\n",string1);

    //COMPARAÇÃO:

    //int resultado= strlen(string1); //retorna o tamanho de string1 como 'int'
    //int resultado= strcmp(string1,string2);//Compara todos os caracteres de duas strings, se igual a 0, então são iguais
    //int resultado= strncmp(string1,string2,1);//Compara n caracteres de duas strings
    //int resultado= strcmpi(string1,string2); //Compara as duas strings inteiras, mas ignora se é maiúsculo ou minúsculo
    //int resultado= strnicmp(string1,string2,1); //Compara as duas strings até n caracteres, mas ignora se é maiúsculo ou minúsculo

    //printf("%d\n",resultado);

    return 0;
}