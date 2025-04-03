#include <stdio.h>

int main(){
    FILE *pF= fopen("c:\\Users\\user\\Desktop\\poem.txt","r");

    char buffer[255];
    
    if (pF == NULL){
        printf("Não foi possível abrir o arquivo!\n");
    }
    else{
        while(fgets(buffer,255,pF)!= NULL){//Enquanto buscar e achar algo diferente de nulo, escreve
        //fgets(buffer,255,pF);//Busca texto do parâmetro do ponteiro 'pF' que aponta para o arquivo 'poem.txt'
        printf("%s",buffer); //Sem loop, retorna apenas a primeira linha
    }
    }
    fclose(pF); //Boa prática de programação sempre fechar
    
    return 0;
}