#ifndef LISTACIRCULAR_H_INCLUDED
#define LISTACIRCULAR_H_INCLUDED
#include "Jugador.h"

typedef struct nodo{
    Pjugador jug;
    struct nodo* sig;
    struct nodo* ant;
}*Pnodo;

void insertar(Pjugador aInsertar);
int eliminar(Pjugador aEliminar);
Pjugador buscar (char nombre[]);
int longitud();


#endif // LISTACIRCULAR_H_INCLUDED
