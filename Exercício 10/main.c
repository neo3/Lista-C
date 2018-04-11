#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int mat[3][3];
    int arr[3] = {0};

    //Preencher Matriz
    for(i=0;i<3;i++){ //Linha
        for(j=0;j<3;j++){ //Coluna
            printf("Digite o numero da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }

        printf("\n"); //Pula linha
    }

    //Gerar array
    for(i=0;i<3;i++){ //Linha
        for(j=0;j<3;j++){ //Coluna
            arr[i] += mat[j][i];
        }
    }

    //Imprimir array
    printf("Array: ");
    for(i=0;i<3;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
