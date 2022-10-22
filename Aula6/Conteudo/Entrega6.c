#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
    int *x;
    int *y;
};

struct reta{
    struct ponto *p1;
    struct ponto *p2;
};

typedef struct ponto Ponto;
typedef struct reta Reta;

Reta* alocaMem(){

    Ponto *p1 = (Ponto*)malloc(sizeof(Ponto));
    p1->x = (int)malloc(sizeof(int));
    p1->y = (int)malloc(sizeof(int));

    Ponto *p2 = (Ponto*)malloc(sizeof(Ponto));
    p2->x = (int)malloc(sizeof(int));
    p2->y = (int)malloc(sizeof(int));

    Reta *minhaReta = (Reta*)malloc(sizeof(Reta));
    minhaReta->p1 = p1;
    minhaReta->p2 = p2;

    return minhaReta;

}

float getDistancia(Reta *minhaReta){

    return sqrt(pow(*(*(minhaReta)->p1).x - *(*(*minhaReta).p2).x,2)
                + pow(*(*(*minhaReta).p1).y - *(*(*minhaReta).p2).y,2));

}

int main(){

    Reta *reta = alocaMem;
    *(*(*reta).p1).x = 100;

}