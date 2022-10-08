#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *fracionado){

    *inteiro = (int)num;
    *fracionado = num - *inteiro;

}

int main(){

    float numero, fracionado;
    int inteiro;

    printf("Insira um número fracionado: ");
    scanf("%f", &numero);

    frac(numero, &inteiro, &fracionado);

    printf("Número inserido: %f \n", numero);
    printf("Parte inteira: %i \n", inteiro);
    printf("Parte fracionada: %f \n", fracionado);

    return 0;

    free(&inteiro);
    free(&fracionado);

}