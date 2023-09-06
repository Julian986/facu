#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "archivoClientes.h"


void cargaClientesArchivo(char archivo[]){

    stCliente c;
    char opcion;
    FILE * pArch = fopen(archivo, "wb");
    if(pArch){
        do{
            c = cargaUnCliente();
            fwrite(&c, sizeof(stCliente), 1, pArch);

            printf("\n ESC para salir...");
            opcion = getch();
    fclose(pArch);
        }while(opcion!=27);

    }

}

/*void guardaClienteArchivo(stCliente cliente, char archivo[]){

    FILE * pArch = fopen(archivo, "wb");
    if(pArch){
        fwrite(&cliente, sizeof(stCliente), 1, pArch);
        fclose(pArch);
    }
}*/

void muestraClientesArchivo(char archCli[]){
    stCliente c;
    FILE *pArch = fopen(archCli, "rb");
    if(pArch){
       while(fread(&c, sizeof(stCliente), 1, pArch) > 0){
        muestraUnCliente(c);
       printf("\n");
       }
       fclose(pArch);
    }
}
