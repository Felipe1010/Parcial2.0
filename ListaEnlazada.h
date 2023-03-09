//
// Created by Andrés on 7/03/2023.
//

#ifndef PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_LISTAENLAZADA_H
#define PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_LISTAENLAZADA_H



#include <list>
#include <string>
#include "Nodo.h"

template <class T>
class ListaEnlazada {
private:
    Nodo<T>* head;
public:
    ListaEnlazada();

    //Evaluador
    bool esVacio();

    //create
    void agregaNodoInicio( T );
    void agregaNodoFin( T );

    //Buscar
    Nodo<T>* buscarNodo(std::string);
    T* BuscarInfo(std::string);



    //Read
    std::list<T> getList() const;


    //Destructor
    virtual ~ListaEnlazada();
//ordenar dependiendo del peso

    void ordenarLista(bool (*comparar)(T, T));
//concatenar la lista
void concatenarLista(const ListaEnlazada<T>& lista);
private:

    Nodo<T>* tail;
    int size;
public:
    Nodo<T>* begin() const {
        return head;
    }

    Nodo<T>* end() const {
        return nullptr;
    }
};


#endif //PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_LISTAENLAZADA_H
