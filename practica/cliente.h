#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct{
    char nombre[30];
    char apellido[30];
    char dni[10];
} stPersona;

typedef struct{
    int id;
    stPersona persona;
    char telefonoCel[15];
} stCliente;

int idAuto();
stCliente cargaUnCliente();
void muestraUnCliente(stCliente c);


#endif // CLIENTE_H_INCLUDED
