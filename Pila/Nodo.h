//
// Created by Gabi Parrello on 6/9/17.
//

#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

#include <iostream>

template <class T>

class Nodo {
private:
    T dato;

private:
    Nodo *next;

public:
    Nodo() {
        next = NULL;
    }
    Nodo(T d, Nodo* n){
        dato = d;
        next = n;
    }

    T getDato() {
        return dato;
    }

    void setDato(T d) {
        dato = d;
    }

    Nodo *getNext() {
        return next;
    }

    void setNext(Nodo *n) {
        next = n;
    }
};


#endif //INC_02_LISTAS_NODO_H
