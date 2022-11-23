#include <stdio.h>
#include <stdlib.h>

struct disciplina{
    int *codigo;
    char *nome;
};
typedef struct disciplina Disciplina;

struct aluno{
    int *matricula;
    char *nome;
    struct disciplina *listaDisciplina;
    int numeroDeDisciplina;
};
typedef struct aluno Aluno;

Disciplina *alocaDisciplina(int n){
    Disciplina *minhasDisciplinas = (Disciplina*)malloc(sizeof(Disciplina)*n);
    for(int i = 0; i < n; i++){
        minhasDisciplinas[i].codigo = (int*)malloc(sizeof(int));
        minhasDisciplinas[i].nome = (char*)malloc(sizeof(char)*50);

    }
    return minhasDisciplinas;
}

Aluno* alocaAluno(int n){
    Aluno *meusAlunos = (Aluno*)malloc(sizeof(Aluno)*n);
    for(int i = 0; i < n; i++){
        meusAlunos[i].matricula = (int*)malloc(sizeof(int));
        meusAlunos[i].nome = (char*)malloc(sizeof(char)*50);
        meusAlunos[i].listaDisciplina = alocaDisciplina(10);
    }
    return meusAlunos;
}

void insereAluno(Aluno *aluno){
    *((*aluno).matricula) = 10;//scanf("%d", *(aluno).matricula)
    (*aluno).nome = "Renaro Matos";
    (*aluno).numeroDeDisciplina = 1;
    
    *((*aluno).listaDisciplina[0].codigo) = 1;
    (*aluno).listaDisciplina[0].nome = "Estrutura de dados";

}

int main(){

}