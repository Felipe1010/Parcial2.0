//
// Created by Andrés on 8/03/2023.
//

#ifndef PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_CLIENTE_H
#define PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_CLIENTE_H
using namespace std;
#include <cstdlib>
#include <string>
#include <list>
#include "Producto.h"
#include "ListaEnlazada.h"
class Cliente {
private:
    string cliente;
    string ciudad;
public:
    Cliente();

    const string &getCliente() const;

    void setCliente(const string &cliente);

    const string &getCiudad() const;

    void setCiudad(const string &ciudad);

};


#endif //PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_CLIENTE_H
