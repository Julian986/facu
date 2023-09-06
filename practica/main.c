#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "archivoClientes.h"
#define AR_CLIENTES "clientes.dat"
#include "listaCliente.h"

int main()
{
    stCliente c;
    //c = cargaUnCliente();
    //muestraUnCliente(c);

    /*cargaClientesArchivo(AR_CLIENTES);
    muestraClientesArchivo(AR_CLIENTES);*/

    nodo * lista = inicLista();
    lista = cargarLista(lista);

}

nodo * cargarLista(nodo * lista){

    nodo* nuevoNodo;
    char option = 0;

    while(option!=ESC){

        nuevoNodo = crearNodo(cargaUnCliente());
        lista = agregarAlPrincipio(lista, nuevoNodo);

        printf("\n Desea Continuar? Presione esc para salir...");
        option = getch();
    }
    return lista;
}
