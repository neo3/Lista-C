#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vet[10];

    //Preencher Vetor
    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    //Imprimir valores do vetor
    printf("\n");
    for(i=0;i<10;i++){
        printf("Numero na posicao %d: %d\n", i, vet[i]);
    }

    //Imprimir valores do vetor na ordem inversa
    printf("\n");
    for(i=9;i>=0;i--){
        printf("Numero na posicao %d: %d\n", i, vet[i]);
    }

    return 0;
}
