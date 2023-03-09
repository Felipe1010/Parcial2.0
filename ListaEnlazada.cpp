//
// Created by Andrés on 7/03/2023.
//

#include "ListaEnlazada.h"

template<class T>
ListaEnlazada<T>::ListaEnlazada() {
    head = NULL;
}

template<class T>
bool ListaEnlazada<T>::esVacio() {
    return head==NULL;
}

template<class T>
void ListaEnlazada<T>::agregaNodoInicio(T info) {
    Nodo<T>* nuevoNodo = new Nodo<T>(info);

    if ( esVacio( ) ){
        head = nuevoNodo;

    }else{
        nuevoNodo->next = head;
        head=nuevoNodo;
    }

}


template<class T>
void ListaEnlazada<T>::agregaNodoFin(T info) {
    Nodo<T>* nuevoNodo = new Nodo<T>(info);
    if ( esVacio( ) ){
        head = nuevoNodo;
    }else{
        Nodo<T> *aux = head;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = nuevoNodo;
    }

}


template<class T>
std::list<T> ListaEnlazada<T>::getList() const {
    std::list<T> estructura;
    Nodo<T>* aux = head;

    while (aux!=NULL){
        estructura.push_back(aux->info);
        aux=aux->next;
    }

    return estructura;
}

template<class T>
ListaEnlazada<T>::~ListaEnlazada() {
    Nodo<T>* act=head;
    Nodo<T>* aux=NULL;
    while(act!=NULL){
        aux=act;
        act=act->next;
        delete(aux);
    }

}

template<class T>
Nodo<T> *ListaEnlazada<T>::buscarNodo(std::string id) {
    Nodo<T>* aux= head;
    while (aux!=NULL){
        if (aux->info.getId().compare(id)==0){
            return aux;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
T *ListaEnlazada<T>::BuscarInfo(std::string id) {
    Nodo<T>* aux= head;
    while (aux!=NULL){
        if (aux->info.getId().compare(id)==0){
            return &aux->info;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
void ListaEnlazada<T>::ordenarLista(bool (*comparar)(T, T)) {
    Nodo<T>* actual = head;
    Nodo<T>* siguiente;
    Nodo<T>* minimo;

    while (actual != NULL) {
        minimo = actual;
        siguiente = actual->next;

        while (siguiente != NULL) {
            if (comparar(siguiente->info, minimo->info)) {
                minimo = siguiente;
            }
            siguiente = siguiente->next;
        }

        if (minimo != actual) {
            T temp = actual->info;
            actual->info = minimo->info;
            minimo->info = temp;
        }

        actual = actual->next;
    }
}

template<class T>
void ListaEnlazada<T>::concatenarLista(const ListaEnlazada<T> &lista) {
// Si la lista que se quiere concatenar está vacía, no hay nada que hacer
    if (lista.estaVacia()) {
        return;
    }

    // Si la lista actual está vacía, simplemente copiamos la lista que se quiere concatenar
    if (esVacio()) {
        *this = lista;
        return;
    }

    // Moverse al último nodo de la lista actual
    Nodo<T> *primero= this->primero;
    Nodo<T>* nodoActual = primero;
    while (nodoActual->siguiente != nullptr) {
        nodoActual = nodoActual->siguiente;
    }

    // Agregar cada nodo de la lista que se quiere concatenar al final de la lista actual
    Nodo<T>* nodoAgregado = lista.primero;
    while (nodoAgregado != nullptr) {
        Nodo<T>* nuevoNodo = new Nodo<T>(nodoAgregado->valor);
        nodoActual->siguiente = nuevoNodo;
        nodoActual = nuevoNodo;
        nodoAgregado = nodoAgregado->siguiente;
    }
}

