//
// Created by Andrés on 7/03/2023.
//

#ifndef PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_NODO_H
#define PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_NODO_H


#include <cstdlib>

template <class T> class ListaEnlazada;
template <class T>
class Nodo {
    friend class ListaEnlazada<T>;
private:
    T info;
    Nodo<T>* next;

public:
    Nodo(T info) : info(info) {
        next= NULL;
    };

    virtual ~Nodo() { };

    T getInfo() const;

    void setInfo(T info);
};


#endif //PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_NODO_H
