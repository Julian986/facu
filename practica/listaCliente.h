#ifndef LISTACLIENTE_H_INCLUDED
#define LISTACLIENTE_H_INCLUDED

#include "cliente.h"

typedef struct _nodo{
    stCliente dato;
    struct _nodo* sig;
}nodo;

nodo* crearNodo(stCliente dato);
nodo* agregarAlPrincipio(nodo* lista, nodo* nuevo);
void muestraNodo(nodo* nodoCliente);
void muestraLista(nodo* lista);

#endif // LISTACLIENTE_H_INCLUDED
