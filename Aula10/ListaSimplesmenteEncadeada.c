#include <stdio.h>
#include <stdlib.h>

struct node{
    int valor;
    struct node *proximo;
};
typedef struct node Node;

void removeTodos(Node *lista){

    while(lista != NULL){
        //guarda o próximo elemento
        Node *proximo = lista->proximo;
        //remove o elemento atual
        free(lista);
        //proximo elemento se torna o elemento atual
        lista = proximo;
    }
    
}

Node* removeElemento(Node *lista, int valor){
    //lista vazia
    if(lista == NULL){
        return lista;
    }
    //lista com valores            
    else{
        Node* anterior = NULL;
        while(lista != NULL){
            //elemento encontrado
            if(lista->valor == valor){
                if(anterior = NULL){
                    //salvo o próximo elmento antes de desalocar
                    Node *proximoAux = lista->proximo;
                    free(lista);
                    return proximoAux;
                }else{
                    //proximo elemento do anterior recebe o proximo elmento atual
                    anterior->proximo = lista->proximo;
                    free(lista);
                    return lista;
                }
            }
            anterior = lista;
            lista = lista->proximo;
        }
    }
}

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
    imprimir(minhaLista);

}