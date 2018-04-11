#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;
    char resp[5][10], gab[10], resultado[5] = {0};

    //Preencher Respostas
    printf("Respostas dos Alunos\n\n");
    for(l=0;l<5;l++){ //Linha
        for(c=0;c<10;c++){ //Coluna
            do {
                printf("Digite a resposta %d do aluno %d: ", c+1, l+1);
                scanf("%c", &resp[l][c]);
                fflush(stdin); //Limpar buffer
            }while(resp[l][c] < 'a' || resp[l][c] > 'd');
        }

        printf("\n"); //Pula linha
    }

    //Preencher Gabarito
    printf("Gabarito\n\n");
    for(c=0;c<10;c++){
        do {
            printf("Digite a resposta %d: ", c+1);
            scanf("%c", &gab[c]);
            fflush(stdin); //Limpar buffer
        }while(gab[c] < 'a' || gab[c] > 'd');
    }

    //Verificar resultado
    for(l=0;l<5;l++){ //Linha
        for(c=0;c<10;c++){ //Coluna
            if(resp[l][c] == gab[c]){
                resultado[l]++;
            }
        }
    }

    //Imprimir Resultado
    printf("\nResultado\n\n");
    for(l=0;l<5;l++){
        printf("Aluno %d: %d pontos.\n", l+1, resultado[l]);
    }

    return 0;
}
