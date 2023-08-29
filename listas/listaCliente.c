#include <stdio.h>
#include <stdlib.h>
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
nodo* agregarAlPrincipioDidactica(nodo* lista, nodo* nuevo){
    if(lista == NULL){
        lista = nuevo;
    }else{
     nuevo->sig = lista;
     lista = nuevo;
    }
    return lista;
}

nodo* agregarAlPrincipio(nodo* lista, nodo* nuevo){
    nuevo->sig = lista;
    return nuevo;
}
void muestraNodo(nodo* nodoCliente){
    printf("\n _____ %p", nodoCliente);
    muestraUnCliente(nodoCliente->dato);
    printf("\n >>>>> %p", nodoCliente->sig);
}
void muestraLista(nodo* lista){
    nodo* aux = lista;
    while(aux){  /// while(aux != NULL)
        muestraNodo(aux);
        aux = aux->sig;
    }
}
void muestraRecursiva(nodo* lista){
    if(lista){
        muestraNodo(lista);
        muestraRecursiva(lista->sig);
    }
}
int cuentaNodos(nodo* lista){
    int cont = 0;
    nodo* aux = lista;
    while(aux){
        cont++;
        aux = aux->sig;
    }
    return cont;
}

int cuentaNodosRecursivo(nodo* lista){
    int cont = 0;
    if(lista){
        cont = 1 + cuentaNodosRecursivo(lista->sig);
    }
    return cont;
}

int cuentaNodosRecursivoConFiltro(nodo* lista){
    int cont = 0;
    if(lista){
        if(lista->dato.id > 10){
            cont = 1 + cuentaNodosRecursivoConFiltro(lista->sig);
        }else{
            cont = cuentaNodosRecursivoConFiltro(lista->sig);
        }
    }
    return cont;
}


