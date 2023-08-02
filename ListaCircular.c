#include "stddef.h"
#include "ListaCircular.h"
#include "Jugador.h"
#include "stdlib.h"
#include "string.h"

Pnodo raiz = NULL;

void insertar(Pjugador aInsertar){
    Pnodo nuevo = malloc(sizeof(struct nodo));
    nuevo->jug = aInsertar;

    if (raiz == NULL){
        raiz = nuevo;
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
    }
    else{
        raiz->ant->sig = nuevo;
        nuevo->ant = raiz->ant;
        nuevo->sig = raiz;
        raiz->ant = nuevo;
    }
}
/*
    Elimina un nodo de la lista enlazada. Si retorna un 1 el nodo se elimino correctamente. Retornara un 0 en caso contrario.
*/
int eliminar(Pjugador aEliminar){

    if (raiz != NULL){
        if (aEliminar == raiz->jug && raiz->sig == raiz){//aEliminar es la raiz de una lista con un elemento.
            free(raiz->jug);
            free(raiz);
            raiz = NULL;
            return 1;
        }
        else
        {
            Pnodo nav = raiz;
            if (raiz->sig != raiz){
                if (aEliminar == nav->jug){//aElimiar es la raiz de una lista con varios elementos
                    raiz = nav->sig;
                    nav->ant->sig = nav->sig;
                    nav->sig->ant = nav->ant;
                    free(nav->jug);
                    free(nav);
                    return 1;
                }
                else{//aEliminar esta entre la raiz y el ultimo elemento
                    while (nav->sig != raiz){
                        if (nav->jug == aEliminar){
                            nav->ant->sig = nav->sig;
                            nav->sig->ant = nav->ant;
                            free(nav->jug);
                            free(nav);
                            return 1;
                        }
                        else{
                            nav = nav->sig;
                        }
                    }

                    if (nav->sig == raiz && nav->jug == aEliminar){//aEliminar es el ultimo elemento de una lista con varios elementos
                        nav->ant->sig = nav->sig;
                        nav->sig->ant = nav->ant;
                        free(nav->jug);
                        free(nav);
                        return 1;
                    }

                }
            }
        }
    }
return 0;
}
Pjugador buscar (char nombre[]){
Pnodo nav;

    if (raiz != NULL){
       nav = raiz;

       //Si esta entre el primero y el anteultimo de la lista.
       while (nav->sig != raiz){
        if (!strcmp(nav->jug->nombre, nombre)){
            return nav->jug;
        }

        nav = nav->sig;
       }

        //Si es el ultimo de la lista.
        if (nav->sig == raiz && !strcmp(nav->jug->nombre, nombre)){
            return nav->jug;
        }
    }

return NULL;
}

int longitud(){
Pnodo nav = raiz;
int cant = 0;

    if (raiz != NULL){
        cant++;
        nav = nav->sig;

        while (nav != raiz){
            cant++;
            nav = nav -> sig;
        }
    }

return cant;
}
