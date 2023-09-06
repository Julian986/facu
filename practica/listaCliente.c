#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaCliente.h"

nodo* inicLista(){
    return NULL;
}

nodo* crearNodo(stCliente dato){
    nodo* nuevoNodo = (nodo*) malloc(sizeof(nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->sig = NULL;
    return nuevoNodo;

}

nodo* agregarAlPrincipio(nodo* lista, nodo* nuevo){
    nuevo->sig = lista;
    return nuevo;
}

void muestraNodo(nodo* nodoCliente){
   // printf("\n _____%p", nodoCliente); direccion de memoria del nodo actual
    muestraUnCliente(nodoCliente->dato);
    // printf("\n >>>>> %p", nodoCliente->sig); direccion de memoria del nodo siguiente
}

void muestraLista(nodo* lista){
    nodo* aux = lista;
    while(aux){
        muestraNodo(aux);
        aux = aux->sig;
    }
}

void muestraListaRecursiva(nodo* lista){
    if(lista){
        muestraNodo(lista);
        muestraListaRecursiva(lista->sig);
    }
}

int cuentaNodos(nodo* lista){
    int cont = 0;
    nodo* aux = lista;
    while(aux){

    }
}
