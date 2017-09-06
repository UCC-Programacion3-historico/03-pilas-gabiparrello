#include <iostream>
#include "../Pila/Pila.h"

template <class T>
bool areEquals(Pila<T> *p1, Pila<T> *p2);

using namespace std;

int main() {
    string palabra1;
    string palabra2;

    Pila<char> *pila1 = new Pila<char>();
    Pila<char> *pila2 = new Pila<char>();

    std::cout << "Ejercicio 03/02\n" << std::endl;

    cout << endl << "Ingrese una palabra: ";
    cin >> palabra1;

    cout << endl << "Ingrese otra palabra: ";
    cin >> palabra2;

    for(int i=0; i < palabra1.length(); i++) {

        pila1->push(palabra1[i]);
    }

    for(int i=0; i < palabra2.length(); i++) {

        pila2->push(palabra2[i]);
    }

    if (areEquals(pila1, pila2)) cout << endl << "Las palabras son iguales :)";
    else cout << endl << "Las palabras no son iguales :(";

    return 0;
}


template <class T>
bool areEquals(Pila<T> *p1, Pila<T> *p2) {

    if (p1->esVacia() && p2->esVacia()) return true;

    while (!p1->esVacia()) {
        if (p1->pop() != p2->pop()) return false;
    }

    return p2->esVacia();
}