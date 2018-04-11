#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int mat[5][5];

    //Preencher Matriz
    for(i=0;i<5;i++){ //Linha
        for(j=0;j<5;j++){ //Coluna
            if(i > j){
                mat[i][j] = 0;
            }
            else if(i < j){
                mat[i][j] = j+1;
            }
            else {
                mat[i][j] = i+1;
            }
        }
    }

    //Imprimir matriz
    for(i=0;i<5;i++){ //Linha
        for(j=0;j<5;j++){ //Coluna
            printf("%d  ", mat[i][j]);
        }
        printf("\n"); //Próxima linha
    }

    return 0;
}
