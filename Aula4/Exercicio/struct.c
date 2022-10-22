#include <stdio.h>
#include <string.h>

#define TAMANHOMAX 200 //definir o tamanho máximo
struct Registro{
    
    char nome[TAMANHOMAX];
    char sobrenome[TAMANHOMAX];
    int idade;
    int matricula;
    char graduacao[TAMANHOMAX];
    char endereco[TAMANHOMAX];
};

typedef struct Registro MeuRegistro;

MeuRegistro* alocaEstrutura(int N){

    MeuRegistro *meusRegistros = (MeuRegistro*)malloc(sizeof(MeuRegistro)*N);
    if(meusRegistros != NULL){
        return meusRegistros;
    }
    else{
        return NULL;
    }
}

void preencheEstrutura(MeuRegistro *estrutura, int n){

    for (int i = 0; i < n; i++){
        printf("Digite o Nome %d:\n", i+1);
        fgets(estrutura[i].nome, TAMANHOMAX, stdin);
        printf("Digite o Sobrenome %d:\n", i+1);
        fgets(estrutura[i].sobrenome, TAMANHOMAX, stdin);
        printf("Digite a idade%d:\n", i+1);
        scanf("%d", &estrutura[i].idade);
        getchar();
        printf("Digite a matricula%d:\n", i+1);
        scanf("%d", &estrutura[i].matricula);
        getchar();
        printf("Digite o Curso de Grad %d:\n", i+1);
        fgets(estrutura[i].graduacao, TAMANHOMAX, stdin);
        printf("Digite o Endereco %d:\n", i+1);
        fgets(estrutura[i].endereco, TAMANHOMAX, stdin);
    }
}

char* nomeDoAlunoMaisVelho(MeuRegistro *estrutura, int n){
    
    int maiorIdade = -1;
    int indiceMaiorIdade = -1;
    for(int i = 0; i < n; i++){
        if(estrutura[i].idade > maiorIdade){
            maiorIdade = estrutura[i].idade;
            indiceMaiorIdade = i;
        }
    }
    if(indiceMaiorIdade = -1){
        return estrutura[indiceMaiorIdade].nome;
    }
    else{
        return -1;
    } 
    return estrutura[indiceMaiorIdade].nome;
}

float mediaDeIdadeDosAlunos(MeuRegistro* estrutura, int n){

    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += estrutura[i].idade;
    }
    return (float)soma/(float)n;
}

int main(){

    //alocação estática do vetor "MeuRegistro"
    MeuRegistro x[100];
    //alocação dinâmica do vetor "MeuRegistro"
    int N = 10;
    MeuRegistro *meusRegistros = alocaEstrutura(N);
    preencheEstrutura(meusRegistros, N);
    printf("%s\n", nomeDoAlunoMaisVelho(meusRegistros, N));
    printf("%f\n", mediaDeIdadeDosAlunos(meusRegistros, N));
}