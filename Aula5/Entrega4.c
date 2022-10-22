#include <stdio.h>
#include <stdlib.h>

#define TAMANHOMAX 200
struct  Voo{
    
    int numVoo;
    int dataVoo;
    int horaVoo;
    char aeroportoSaida[TAMANHOMAX];
    char aeroportoChegada[TAMANHOMAX];
    int rota;
    int tempoEstimado;
    int passageiros;

};

struct Passagem{
    
    int numPassagem;
    int numVoo;
    int dataEmbarque;
    int horaEmbarque;
    char portaoEmbarque[TAMANHOMAX];

};

typedef struct Voo MeuVoo;
typedef struct Passagem MinhaPassagem;

MeuVoo* alocaVoo(int n){
    MeuVoo *meusVoos = (MeuVoo*)malloc(sizeof(MeuVoo));
    if(meusVoos != NULL){
        return meusVoos;
    }
    else{
        return NULL;
    }  
}

MinhaPassagem* alocaPassagem(int n){
    MinhaPassagem *minhasPassagens = (MinhaPassagem*)malloc(sizeof(MinhaPassagem));
    if(minhasPassagens != NULL){
        return minhasPassagens;
    }
    else{
        return NULL;
    }
}

void cadastrarVoo(MeuVoo *voo, int n){
    for(int i = 0; i < n; i++){
        printf("Digite o número do voo%d:\n", i+1);
        scanf("%d", &voo[i].numVoo);
        getchar();
        printf("Digite a data do voo%d:\n", i+1);
        scanf("%d", &voo[i].dataVoo);
        getchar();
        printf("Digite a hora do voo%d:\n", i+1);
        scanf("%d", &voo[i].horaVoo);
        getchar();
        printf("Digite o aeroporto de saída %d:\n", i+1);
        fgets(voo[i].aeroportoSaida, TAMANHOMAX, stdin);
        printf("Digite o aeroporto de chegada %d:\n", i+1);
        fgets(voo[i].aeroportoChegada, TAMANHOMAX, stdin);
        printf("Digite a rota do voo%d:\n", i+1);
        scanf("%d", &voo[i].rota);
        getchar();
        printf("Digite o tempo estimado do voo%d:\n", i+1);
        scanf("%d", &voo[i].tempoEstimado);
        getchar();
        printf("Digite a quantidade de passageiros do voo%d:\n", i+1);
        scanf("%d", &voo[i].passageiros);
        getchar();
    }
}

void consultaVoo(MeuVoo *voo, int n){
    for(int i = 0; i < n; i++){
        printf("Número do voo: %d\n", voo[i].numVoo, i+1);
        printf("Data do voo: %d\n", voo[i].dataVoo, i+1);
        printf("Hora do voo: %d\n", voo[i].horaVoo, i+1);
        printf("Aeropoto de saúda: %d\n", voo[i].aeroportoSaida, i+1);
        printf("Aeroporto de chegada: %d\n", voo[i].aeroportoChegada, i+1);
        printf("Rota do voo: %d\n", voo[i].rota, i+1);
        printf("Tempo estimado do voo: %d\n", voo[i].tempoEstimado, i+1);
        printf("Quantidade de passageiso do voo: %d\n", voo[i].passageiros, i+1);
    }
}

void cadastraPassagem(MinhaPassagem *passagem, int n){
    for(int i = 0; i < n; i++){
        printf("Digite o número da passagem%d:\n", i+1);
        scanf("%d", &passagem[i].numPassagem);
        getchar();
        printf("Digite o número do voo%d:\n", i+1);
        scanf("%d", &passagem[i].numVoo);
        getchar();
        printf("Digite a data do embarque%d:\n", i+1);
        scanf("%d", &passagem[i].dataEmbarque);
        getchar();
        printf("Digite a hora do embarque%d:\n", i+1);
        scanf("%d", &passagem[i].horaEmbarque);
        getchar();
        printf("Digite o portão de embarque %d:\n", i+1);
        fgets(passagem[i].portaoEmbarque, TAMANHOMAX, stdin);
    }
}

void consultaPassagem(MinhaPassagem *passagem, int n){
    for(int i = 0; i < n; i++){
        printf("Número da passagem: %d\n", passagem[i].numPassagem);
        printf("Número do voo: %d\n", passagem[i].numVoo, i+1);
        printf("Data do embarque: %d\n", passagem[i].dataEmbarque, i+1);
        printf("Hora do embarque: %d\n", passagem[i].horaEmbarque, i+1);
        printf("Portão de embarque: %d\n", passagem[i].portaoEmbarque, i+1);
    }
}

int main(){
    int N = 1;
    MeuVoo *meusVoos = alocaVoo(N);
    MinhaPassagem *minhasPassagens = alocaPassagem(N);
    cadastrarVoo(meusVoos, N);
    cadastraPassagem(minhasPassagens, N);
    consultaVoo(meusVoos, N);
    consultaPassagem(minhasPassagens, N);
    
}