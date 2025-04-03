#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

//Como iremos utilizar variáveis mais complicadas, declararemos como variáveis globais fora do escopo:
char board[3][3];//Matriz 3x3 que representa a tabela do jogo da velha #
const char PLAYER= 'X';//Constante 'player' que representa o 'X' símbolo do player
const char COMPUTER= 'O';//Constante 'computer' que representa o 'O' símbolo do computador

//Criação de funções protótipo:

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);



int main(){
    char winner= ' ';//No momento, ninguém ganhou, se o ganhador foi o PLAYER, então atribuímos 'X', senão 'O'
    char continuar;

    resetBoard();
    do{
        winner= ' ';
        continuar= ' ';

        resetBoard();

        while(winner == ' ' && checkFreeSpaces() != 0 ){//Enquanto o vencedor não for ninguém e não sobrarem espaços, então continua
            printBoard();

            //Turno do PLAYER
            playerMove();
            winner= checkWinner();
            if(winner != ' ' || checkFreeSpaces == 0){
                break;
            }
            
            //Turno do COMPUTER
            computerMove();
            winner= checkWinner();
            if(winner != ' ' || checkFreeSpaces == 0){
                break;
            } 
        }

        printBoard();
        printWinner(winner);

        printf("Deseja continuar (S/N): ");
        scanf(" %c", &continuar);
        continuar= toupper(continuar);
        
    }while(continuar == 'S');

    printf("Obrigado por jogar!\n");

    return 0;
}

void resetBoard(){
    for(int i= 0; i < 3 ;i++){
        for(int j= 0; j < 3; j++){
            board[i][j]= ' ';//Percorre a matriz e diz que 'board' da posição i j é vazia, esvaziando-a
        }
    }
}
void printBoard(){
    printf(" %c | %c | %c",board[0][0],board[0][1],board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c",board[1][0],board[1][1],board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c",board[2][0],board[2][1],board[2][2]);
    printf("\n");
}
int checkFreeSpaces(){
    int freeSpaces= 9;

    for(int i=0;i<3;i++){
        for(int j=0;j < 3;j++){//Percorre a matriz
            if(board[i][j] != ' '){ //Se 'board' da posição [i][j] não for um espaço vazio, então, há decréscimo de unidade no num de espaços livre armazenados em 'freeSpaces'
                freeSpaces--;
            }
        }
    }
    return freeSpaces; //Se igual a 0, então para a execução do while do main
}

void playerMove(){
    int x,y;
    do{ 
        printf("Digite a linha e a coluna (1-3) : ");
        scanf("%d %d",&x,&y);

        x--;//Decréscimo de unidade para utilizar 1 ao invés de 0...
        y--;

        if(board[x][y] != ' '){//Se 'board' das posições do input do usuário não estiverem vazias, então estão ocupadas, portanto o usuário não pode colocar lá
            printf("Movimento inválido!\n");
        }
        else{
            board[x][y]= PLAYER;
            break;
        }
    }while(board[x][y] != ' ');//O loop vai até preencher a posição de [x] e [y]
}

void computerMove(){
    srand(time(0)); //Seed com o tempo atual para poder gerar um número aleatório
    int x,y;

    if(checkFreeSpaces() > 0){
        do{
            x= rand() % 3;//Gera uma linha aleatória até 2 (0,1,2)
            y= rand() % 3;//Gera uma coluna aleatória até 2 (0,1,2)
        }while(board[x][y] != ' '); //Gera números aleatórios até que a posição de x e y esteja livre

        board[x][y]= COMPUTER; //Atribui o símbolo de COMPUTER a board na posição [x][y]
    }
    else{
        printWinner(' ');
    }
}

char checkWinner(){
    //Checa linhas 
    for(int i=0; i < 3;i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){//SE AS LINHAS FOREM IGUAIS, SEQUÊNCIAS DE 3, ENTÃO RETORNE O CARACTERE EM QUALQUER UMA DELAS
            return board[i][0];//Retornei o caractere da primeira, pois o 3 são iguais
        }
    }
    //Checa colunas
    for(int j=0; j < 3; j++){
        if(board[0][j] == board[1][j] && board[1][j]== board[2][j]){
            return board[0][j];
        }
    }

    //Checa diagonal: as diagonais são as das coordenadas 0,0 |1,1| 2,2 ou 0,2| 1,1|2,0
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){//Diagonais normais
        return board[0][0];
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){//Diagonais ao contrário
        return board[0][2];
    }

    return ' ';//Se não há nenhum vencedor, retorna um caractere vazio
}

void printWinner(char winner){
    if(winner == PLAYER){
        printf("Parabéns, você venceu!\n");
    }
    else if(winner == COMPUTER){
        printf("Você perdeu! Uma pena... Tente novamente outra vez...\n");
    }
    else{
        printf("É UM EMPATE!\n");
    }
}