#include <stdio.h>
#include <stdlib.h>
#include "listaCircular.h"
#include "Jugador.h"

int main()
{/*
    int op;
    printf("Bienvenido!\nSeleccione una opcion:\n\n");
    printf("1) Jugar.\n2) Reglas.\n0) Salir.\nOpcion: ");
    scanf("%i", &op);

    //switch case con while para ir ingresando jugadores hasta estar listo, despues salta con el break
    if (op == 2){

    }*/


    printf("Testeando...\n\nCrear jugadores:\n");
    Pjugador Jugador1 = crearNuevoJugador("Julian");
    Pjugador Jugador2 = crearNuevoJugador("Mari");
    Pjugador Jugador3 = crearNuevoJugador("Eve");
    Pjugador Jugador4 = crearNuevoJugador("Bian");
    Pjugador Jugador5 = crearNuevoJugador("May");
    Pjugador Jugador6 = crearNuevoJugador("Ro");

    printf("%d\n", &Jugador1);
    printf("%d\n", &Jugador2);
    printf("%d\n", &Jugador3);
    printf("%d\n", &Jugador4);
    printf("%d\n", &Jugador5);
    printf("%d\n", &Jugador6);

    printf("\nNombres:\n");
    printf("Julian: %s\n", Jugador1->nombre);
    printf("Mari: %s\n", Jugador2->nombre);
    printf("Eve: %s\n", Jugador3->nombre);
    printf("Bian: %s\n", Jugador4->nombre);
    printf("May: %s\n", Jugador5->nombre);
    printf("Ro: %s\n", Jugador6->nombre);

    printf("\nFin de la de crear jugadores.\n\nAhora inserto en la lista:\n\n");
    insertar(Jugador1);
    insertar(Jugador2);
    insertar(Jugador3);
    insertar(Jugador4);
    insertar(Jugador5);
    insertar(Jugador6);

    printf("Fin de la prueba de insertar.\n\n");

    printf("----------Prueba de buscar-----------\n");
    printf("Longitud: %i\n", longitud());

    printf("Esta Julian?: %s\n", buscar("Julian")->nombre);
    printf("Esta Mari?: %s\n", buscar("Mari")->nombre);
    printf("Esta Eve?: %s\n", buscar("Eve")->nombre);
    printf("Esta Bian?: %s\n", buscar("Bian")->nombre);
    printf("Esta May?: %s\n", buscar("May")->nombre);
    printf("Esta Ro?: %s\n", buscar("Ro")->nombre);

    printf("\n\nFin de la prueba de busqueda.\n\n");

    printf("Inicio de prueba de eliminar:\n");

    printf("\nEliminar el ultimo de la lista: ");
    if (eliminar(Jugador6)){
        printf("Correcto.\n");
    }else{
        printf("No eliminado.\n");
    }

    printf("\nEliminar uno del medio de la lista: ");
    if (eliminar(Jugador3)){
        printf("Correcto.\n");
    }else{
        printf("No eliminado.\n");
    }

    printf("\nEliminar el primero de la lista: ");
    if (eliminar(Jugador1)){
        printf("Correcto.\n");
    }else{
        printf("No eliminado.\n");
    }

    printf("\nEliminar uno que no esta en la lista: ");
    if (!eliminar(Jugador6)){
        printf("Correcto.\n");
    }else{
        printf("No eliminado.\n");
    }

    printf("\nEliminar un Nulo: ");
    if (!eliminar(NULL)){
        printf("Correcto.\n");
    }else{
        printf("No eliminado.\n");
    }

    printf("Longitud: %i\n", longitud());

    printf("\nElimino a todos. Longitud: ");
    eliminar(Jugador2);
    eliminar(Jugador4);
    eliminar(Jugador5);

    printf("%i", longitud());

    printf("\n\nFin del testeo.\n");
    //Parece que funciona todo bien
    return 0;
}
