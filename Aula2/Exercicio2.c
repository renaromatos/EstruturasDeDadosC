#include <stdio.h>
#include <stdlib.h>

int negativo(int *vetor, int *N){

    int count = 0;

    for(int i = 0; i < N; i++){
        if(vetor[i] < 0){
            count++;
        }
    }

    return count;

}

void liberaVetor(int *vetor, int *N){

    for(int i = 0; i < N; i++){
        free(vetor[i]);
    }

}

int main(){

    int N, *vetor;
    
    printf("Defina o tamanho do vetor: ");
    scanf("%i", &N);
    vetor = malloc(N * sizeof(int));
    for(int i = 0; i < N; i++){
        printf("Insira o valor da posição %i do vetor: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("Quantia de valores negativos no vetor: %i \n", negativo(vetor, N));

    return 0;

    liberaVetor(vetor, N);

}