#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma=0;
    float media;
    int vet[15];

    //Preencher Vetor
    for(i=0;i<15;i++){
        printf("Digite a nota do aluno [%d]: ", i+1);
        scanf("%d", &vet[i]);
    }

    //Somar todas as notas
    for(i=0;i<15;i++){
        soma += vet[i];
    }

    //Calcular e Imprimir a média
    media = (float) soma / 15;
    printf("\nMedia Geral: %.2f\n", media);

    return 0;
}
