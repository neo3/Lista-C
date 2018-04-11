#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b;
    int va[4], vb[4];

    //Inserir números
    do {
        printf("Digite o numero a: ");
        scanf("%d", &a);
    }while(a < 0 || a >= 10000);

    do {
        printf("Digite o numero b: ");
        scanf("%d", &b);
    }while(b < 0 || b >= 10000);


    //Copiar para o vetor
    for(i=0;i<4;i++){
        va[i] = a % 10; //Exemplo: 1234 % 10 = 123,4 (numero depois da virgula é a sobra, a posição i recebe a sobra - 4)
        a /= 10; ////Exemplo: 1234 / 10 = 123
    }

    for(i=0;i<4;i++){
        vb[i] = b % 10; //Exemplo: 1234 % 10 = 123,4 (numero depois da virgula é a sobra)
        b /= 10; ////Exemplo: 1234 / 10 = 123
    }

    //Imprimir vetores
    printf("\nva: ");
    for(i=0;i<4;i++){ //Linha
        printf("%d ", va[i]);
    }

    printf("\nvb: ");
    for(i=0;i<4;i++){ //Linha
        printf("%d ", vb[i]);
    }

    printf("\n");

    return 0;
}
