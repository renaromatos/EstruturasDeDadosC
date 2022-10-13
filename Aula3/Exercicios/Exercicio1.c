#include <stdio.h>
#include <stdlib.h>

int**** alocaMatriz4d(int N){

    int ****matriz = (int****)malloc(sizeof(int***)*N);
    for(int i = 0; i < N; i++){
        matriz[i] = (int****)malloc(sizeof(int***)*N);
        for(int j = 0; j < N; j++){
            matriz[i][j] = (int***)malloc(sizeof(int**)*N);
            for(int k = 0; k < N; k++){
                matriz[i][j][k] = (int**)malloc(sizeof(int*)*N);
                for(int l = 0; l < N; l++){
                    matriz[i][j][k][l] = (int*)malloc(sizeof(int)*N);
                }
            }
        }
    }
    return matriz;
}

void liberaMtriz(int ****matriz, int *N){

    for(int i = 0; i < N; i++){
        free(matriz);
    }
}

int main(){

    int ****matriz = alocaMatriz4d(10);
    liberaMtriz;

}