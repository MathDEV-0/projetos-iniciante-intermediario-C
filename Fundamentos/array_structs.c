#include <stdio.h>

typedef struct{
    char nome[12];
    float nota;
} Student;

int main(){
    Student student1 = {"Matheus",10.0};
    Student student2 = {"Tiago",7.0};
    Student student3 = {"Iago",5.3};
    Student student4 = {"Nicolas",6.78};

    Student students[]= {student1,student2,student3,student4};//O array junta todas essas informações das structs e coloca em um só, sendo percorrido por 'for' para exibição

    for(int i=0;i<sizeof(students)/sizeof(students[0]);i++){
        printf("Nome do aluno: %-12s\t",students[i].nome); //print da posição 'i' com a tag nome
        printf("Nota: %.2f\n",students[i].nota);
    }

    return 0;
    }