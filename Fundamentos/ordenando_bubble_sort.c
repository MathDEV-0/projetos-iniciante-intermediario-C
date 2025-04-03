#include <stdio.h>

void ordena(char array[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){//Como trabalhamos com j e j+1 devemos acessar n-1 posições do array, -i para otimização
            if(array[j]>array[j+1]){
                int temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
void print(char array[],int size){
    for(int i=0;i<size;i++){
        printf("%c",array[i]);
    }
}

int main(){
    //int array[]= {9,7,8,6,2,1,3,4,5};
    char array[]= {'A','B','C','D','E','F'};
    int size= sizeof(array) / sizeof(array[0]); //Também conseguimos fazer com  char, já que seguem o ASCII

    ordena(array,size);
    print(array,size);

    return 0;
}