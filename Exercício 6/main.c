#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maior, menor, posMaior, posMenor;
    int vet[5];

    //Preencher Vetor
    for(i=0;i<5;i++){
        printf("Digite o numero da posicao [%d]: ", i);
        scanf("%d", &vet[i]);
    }

    //Ler valores
    for(i=0;i<5;i++){
        if(i == 0){
            maior = vet[i];
            menor = vet[i];

            posMaior = i;
            posMenor = i;
        }

        if(vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        }

        if(vet[i] < menor){
            menor = vet[i];
            posMenor = i;
        }
    }

    //Resultado
    printf("\n");

    printf("Posicao do maior numero (%d): %d\n", maior, posMaior);
    printf("Posicao do menor numero (%d): %d\n", menor, posMenor);

    return 0;
}
