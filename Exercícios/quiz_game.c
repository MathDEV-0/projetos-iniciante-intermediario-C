#include <stdio.h>
#include <ctype.h>

int main(){

    char questao[][100]={"1.Em que ano foi lançada a linguagem C?",
                        "2.Quem criou a linguagem C?",
                        "3.Quem é o antecessor do C?"};
    
    char opcoes[][100]={"A. 1969","B. 1972","C. 1975","D. 2000",
                        "A. Dennis Ritchie","B. Albert Einstein","C. Gustavo Guanabara","D. Mateus Raeder",
                        "A. Objective C","B. B","C. C++","D.C#"};

    char resposta[3]={'B','A','B'};
    int numdeQuest= sizeof(questao)/sizeof(questao[0]);

    char tentativa;
    int pontuacao;
    
    printf("\n**********************\n");
    printf("HORA DO QUIZ!\n");
    printf("**********************\n");

    for(int i=0;i<numdeQuest;i++){
        printf("\n**********************\n");
        printf("%s\n",questao[i]);
        printf("**********************\n");
        for(int j= (i*4) ; j<(i*4)+4 ;j++ ){ //Percorre de 4 em 4, enquanto j< i*4 +4, então i=0 e j=0 0 < 0*4+4 = True, então printa opções[0], j=1 1<0*4+4= True, j=2 2<0*4+4= True j=3 3<0*4+4= True j=4 4<4*0+4= False
            printf("%s\n",opcoes[j]);
        }
        printf("Sua resposta: \n");
        scanf(" %c",&tentativa);
        
        /*OU
        scanf("%c",&tentativa);
        scanf("%c")//Limpa o \n do input buffer
        */

       tentativa= toupper(tentativa); //A função 'toupper' retorna o caractere para a letra maiúscula, disponível na lib 'ctype.h'

       if(tentativa == resposta[i]){
        printf("\nCorreto!\n");
        pontuacao++;
       }
       else{
        printf("\nErrado!\n");
       }    
    }
    
    printf("\n**********************\n");
    printf("PONTUAÇÃO FINAL: %d/%d \n",pontuacao,numdeQuest);
    printf("**********************\n");

    return 0;
}