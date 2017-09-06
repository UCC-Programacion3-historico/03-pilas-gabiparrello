#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {

    string palabra;
    Pila<char> *pila = new Pila<char>();

    std::cout << "Ejercicio 03/01\n" << std::endl;

    cout << endl << "Ingrese una palabra: ";
    cin >> palabra;

    for(int i=0; i < palabra.length(); i++) {

        pila->push(palabra[i]);
    }

    cout << endl;
    while (!pila->esVacia()) cout << pila->pop();

    cout << endl << endl;


    return 0;
}