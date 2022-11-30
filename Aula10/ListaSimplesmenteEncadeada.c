#include <stdio.h>
#include <stdlib.h>

struct node{
    int valor;
    struct node *proximo;
};
typedef struct node Node;

Node* insereFinal(Node *lista, int valor){
    if(lista == NULL){
        Node *node = (Node*)malloc(sizeof(Node));
        node->valor = valor;
        node->proximo = NULL;
        return node;
    }else{
        Node *listaAux = lista;
        while (listaAux->proximo != NULL){
            listaAux = listaAux->proximo;
        }
        //ao final o listaAux é o último
        Node *node = (Node*)malloc(sizeof(Node));
        node->valor = valor;
        node->proximo = NULL;
        listaAux->proximo = node;
        return lista;
    }
}

Node* insereInicio(Node* lista, int valor){
    //se a lista é vazia
    if(lista == NULL){
        Node *node = (Node*)malloc(sizeof(Node));
        (*node).valor = valor; //node->valor = valor
        (*node).proximo = NULL;
        return node;
    }else{
        Node *node = (Node*)malloc(sizeof(Node));
        (*node).valor = valor;
        (*node).proximo = lista;
        return node; //este se torna o primeiro elemento
    }
}

void imprimir(Node *lista){
    Node *listaAux = lista;
    while (listaAux != NULL){
        printf("%d ", listaAux->valor);
        listaAux = listaAux->proximo;
    }
}

int main(){

    Node* minhaLista = NULL;
    minhaLista = insereFinal(minhaLista, 100);
    minhaLista = insereFinal(minhaLista, 5);
    
    minhaLista = insereInicio(minhaLista, 10);
    minhaLista = insereInicio(minhaLista, 1000);
    
    /**for(int i = 0; i < 100; i++){
        minhaLista = insereInicio(minhaLista, rand()%1000);
    }*/
    
    imprimir(minhaLista);

}