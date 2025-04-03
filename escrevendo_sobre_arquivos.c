#include <stdio.h>

int main(){
    FILE *pF=fopen("text.txt","a");

    fprintf(pF,"Bob Esponja Calça Quadrada");

    fclose(pF);

    return 0;
}