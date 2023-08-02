#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

typedef struct carta{
    char palo;
    int valor;
}*Pcarta;

typedef struct jugador{
    char nombre[20];
    int puntaje;
    Pcarta cartaActual;
}*Pjugador;

Pjugador crearNuevoJugador(char nombre[]);
Pcarta juntarCarta();


#endif // JUGADOR_H_INCLUDED
