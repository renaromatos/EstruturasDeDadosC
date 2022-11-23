/**
 * Questão da movimentação do cavalo
 * considerando minimo de pasto que ele
 * come até chegar em um objetivo.
*/
#include <stdio.h>
#include <stdlib.h>

int minimo(int a, int b, int c){

    if(a <= b && a <= c) return a;
    if(b <= a && b <= c) return b;
    else return c;

}

int minGramaCavalo(int **tab, int linhas, int colunas){

    if(linhas > 0 && colunas > 0){
    return tab[linhas][colunas] +
                minimo((minGramaCavalo, tab, linhas -1, colunas),
                minGramaCavalo(tab, linhas, colunas - 1),
                minGramaCavalo(tab, linhas - 1, colunas -1));
    }
    if(linhas == 0 && colunas == 0){
        return tab[linhas][colunas];
    }
    
}

int maint(){

}