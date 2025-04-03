#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    char nome[100];
    float nota;
} filme;

void ordenarFilmes(filme filmes[], int n) {
    int i, j;
    filme temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (filmes[i].nota < filmes[j].nota) {
                temp = filmes[i];
                filmes[i] = filmes[j];
                filmes[j] = temp;
            }
        }
    }
}

int main() {
    FILE *pF = fopen("c:\\Users\\user\\Documents\\lista_filmes.txt", "r");

    char buffer[100];
    int n = 0;
    filme filmes[100];

    if (pF == NULL) {
        printf("Não foi possível ler o arquivo\n");
        return 1;
    } else {
        while (fgets(buffer, sizeof(buffer), pF)) {
            buffer[strcspn(buffer, "\n")] = 0;

            // Última ocorrência do hífen
            char *last_hyphen = strrchr(buffer, '-');
            if (last_hyphen != NULL) {
                // Split the string into name and rating parts
                *last_hyphen = '\0';
                char *nome = buffer;
                char *nota_str = last_hyphen + 1;

                // Trim any leading spaces from the rating string
                while (isspace((unsigned char)*nota_str)) nota_str++;

                // Copy name and convert note
                strcpy(filmes[n].nome, nome);
                filmes[n].nota = atof(nota_str);
                n++;
            }
        }
    }
    fclose(pF);

    ordenarFilmes(filmes, n);

    printf("Filmes ordenados por nota:\n");
    for (int i = 0; i < n; i++) {
        printf("%d) %s - %.1f\n", i + 1, filmes[i].nome, filmes[i].nota);
    }

    return 0;
}
