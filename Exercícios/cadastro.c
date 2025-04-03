#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#define MAX_CHAR 100
#define MAX_CRED 5000000
#define MIN_CRED 10000

typedef struct {
    char nome[MAX_CHAR];
    int idade;
    float altura;
    float peso;
    long long credencial;
}Atleta;

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(int argc, char *argv[]){
    int n;

    printf("Digite o número de cadastros: ");
    scanf("%d",&n);

    Atleta * atletas = (Atleta *)malloc(n * sizeof(Atleta));

    if(atletas == NULL){
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    
    
    for (int i = 0; i < n; i++) {
        printf("\nCadastro [%d]\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", atletas[i].nome);

        limparBufferEntrada();

        printf("Digite a idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura: ");
        scanf("%f", &atletas[i].altura);
        printf("Digite o peso: ");
        scanf("%f", &atletas[i].peso);
        
        srand(time(0));

        atletas[i].credencial= rand() % MAX_CRED + MIN_CRED;

        printf("\nSua credencial foi gerada: %lld\n", atletas[i].credencial);
    }

    printf("Dados registrados: \n");
    
    for(int i=0;i<n;i++){
        printf("\nAtleta[%d]\n",i+1);
        printf("Nome: %s\n",atletas[i].nome);
        printf("Idade: %d\n",atletas[i].idade);
        printf("Altura: %.2f\n",atletas[i].altura);
        printf("Peso: %.2f\n",atletas[i].peso);
        printf("Credencial: %lld\n",atletas[i].credencial);
    }

    free(atletas);

    return 0;

}