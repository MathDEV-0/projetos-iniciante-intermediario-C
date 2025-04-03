#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[25];
    char senha[25];
    int id;
}User; //Dá o apelido User para a struct

int main(){
    User user1= {"Bob","senha123",123456789}; //Simplifica para não precisar escrever struct User user1 = {...}
    User user2= {"Bill","senha321",987654321};

    printf("%s\n",user1.nome);
    printf("%s\n",user1.senha);
    printf("%d\n",user1.id);
    printf("%s\n",user2.nome);
    printf("%s\n",user2.senha);
    printf("%d\n",user2.id);

    return 0;

}
