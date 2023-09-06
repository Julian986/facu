#ifndef ARCHIVOCLIENTES_H_INCLUDED
#define ARCHIVOCLIENTES_H_INCLUDED
#include "cliente.h"
#define AR_CLIENTES "clientes.dat"

//void guardaClienteArchivo(stCliente cliente, char archivo[]);
void cargaClientesArchivo(char archivo[]);
void muestraClientesArchivo(char archCli[]);

#endif // ARCHIVOCLIENTES_H_INCLUDED
