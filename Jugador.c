#include "jugador.h"
#include "stdlib.h"
#include "string.h"

/*

typedef struct carta{
    char palo;
    int valor;
}*Pcarta;

typedef struct jugador{
    char nombre[20];
    int puntaje;
    Pcarta cartaActual;
}*Pjugador;

Pcarta juntarCarta();

*/
Pjugador crearNuevoJugador(char nombre[]){//el espacio que ocuparia una carta anterior se restaria? y se reemplazaria por el nuevo
    Pjugador nuevo = malloc(sizeof(struct jugador));
    strcpy(nuevo->nombre, nombre);
    nuevo->cartaActual = NULL;
    nuevo->puntaje = 0;

    return nuevo;
}

Pcarta juntarCarta(){
    srand(time(NULL));
    Pcarta nueva = malloc(sizeof(struct carta));
    nueva->valor = 1 + rand() % 12;;

    int palo = 1 + rand() % 4;
    switch(palo){
        case 1:{
                nueva->palo = 'E';
                break;
                }
        case 2:{
                nueva->palo = 'O';
                break;
                }
        case 3:{
                nueva->palo = 'B';
                break;
                }
        case 4:{
                nueva->palo = 'C';
                break;
                }
    }

return nueva;
}


