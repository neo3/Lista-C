#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, qtdNeg=0;
    float somaPos=0.0;
    float vet[10];

    //Preencher Vetor
    for(i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }

    //Ler vetor
    for(i=0;i<10;i++){
        if(vet[i] < 0){
            qtdNeg++;
        }
        else {
            somaPos += vet[i];
        }
    }

    //Resultado
    printf("\nQuantidade de numeros negativos: %d\n", qtdNeg);
    printf("Soma dos numeros positivos: %.2f\n", somaPos);

    return 0;
}
