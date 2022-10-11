#include <stdio.h>
#include <stdlib.h>

int** alocaMatriz(int linhas, int colunas){

    int **matriz = (int**)malloc(sizeof(int*)* linhas);
    if(matriz == NULL) return NULL;
    for(int i = 0; i < linhas; i++){
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

    int **matriz = alocaMatriz(9999999, 9999999);//consumiu os 16gb do meu pc
    liberaMatriz;
}