#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"


int idAuto(){
    static int id;
    id+=1;
    return id;
}
stCliente cargaUnCliente(){

    stCliente c;

    printf("\n Nombre........:");
    fflush(stdin);
    scanf("%s", c.persona.nombre);

    printf("\n Apellido........:");
    fflush(stdin);
    scanf("%s", c.persona.apellido);

    printf("\n Dni........:");
    fflush(stdin);
    scanf("%s", c.persona.dni);

    printf("\n Telefono........:");
    fflush(stdin);
    scanf("%s", c.telefonoCel);

    return c;

}

void muestraUnCliente(stCliente c){

    printf("\nNombre............: %s", c.persona.nombre);
    printf("\nApellido............: %s", c.persona.apellido);
    printf("\nDni............: %s", c.persona.dni);
    printf("\nTelefono............: %s", c.telefonoCel);
}
