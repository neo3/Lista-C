#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maior, menor, soma=0;
    float media;
    int vet[5];

    //Preencher Vetor
    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    //Ler valores
    printf("\nNumeros lidos: ");
    for(i=0;i<5;i++){
        printf("%d ", vet[i]);

        if(i == 0){
            maior = vet[i];
            menor = vet[i];
        }

        if(vet[i] > maior){
            maior = vet[i];
        }

        if(vet[i] < menor){
            menor = vet[i];
        }

        soma += vet[i];
    }

    //Calcular média
    media = (float) soma / 5;

    //Resultado
    printf("\n\n");

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
