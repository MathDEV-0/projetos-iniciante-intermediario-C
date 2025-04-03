#include <stdio.h>
#include <string.h>

struct Player{
    char nome[12];
    int score;
};

int main(){

    //struct= coleção de variáveis 'parentes'
    //         tais variáveis podem assumir diferentes tipos de dados
    //         listadas sob um nome num bloco de memória
    //         MUITO PARECIDA com classes em outras linguagens, mas sem métodos

    struct Player player1;
    struct Player player2;

    strcpy(player1.nome, "Matheus"); //Utilização do método string copy por não poder assimilar valores à variáveis de char
    player1.score=4;
    strcpy(player2.nome, "Rafael");
    player2.score=5;

    printf("%s\n",player1.nome);
    printf("%d\n",player1.score);

    printf("%s\n",player2.nome);
    printf("%d\n",player2.score);


}