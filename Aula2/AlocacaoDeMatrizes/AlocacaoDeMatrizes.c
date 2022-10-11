#include <stdio.h>
#include <stdlib.h>

int*** alocamatriz3dfuncao(int N){//aloca matriz 3d usando a função alocaMatriz

    int ***matriz = (int**)malloc(sizeof(int**)*N);
    if(matriz = NULL) return NULL;
    for(int i = 0; i < N; i++){
        matriz[i] = alocaMatriz2d(N, N);
        if(matriz[i] == NULL) return NULL;
    }
    return matriz;
}

int*** alocaMatriz3d(int N){//N = tamanho da matriz

    //referencia para matrizes de 2d(int**)
    int ***matriz = (int***)malloc(sizeof(int**)*N);
    for(int i = 0; i < N; i++){
        matriz[i] = (int**)malloca(sizeof(int*)*N);
        if(matriz[i] = NULL) return NULL;
        for(int j = 0; j < N; j++){
            matriz[i][j] = (int*)malloc(sizeof(int)*N);
            if(matriz[i][j] = NULL) return NULL;
        }
    }
    return matriz;
}

int** alocaMatriz2d(int linhas, int colunas){//N = tamanho da matriz

    //aloca referencia para as linhas
    int **matriz = (int**)malloc(sizeof(int*)* linhas);
    if(matriz == NULL) return NULL; //alocação falhou
    //alocacao de cada linha
    for(int i = 0; i < linhas; i++){
        //alocação de cada linha da matriz
        matriz[i] = (int*)malloc(sizeof(int)* colunas);
        if(matriz[i] = NULL) return NULL; 
    }
    return matriz;
}

void liberaMatriz(int **matriz, int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);

}

int main(){

    int **matriz = alocaMatriz(10, 10);


}