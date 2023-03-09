//
// Created by Andrés on 7/03/2023.
//

#ifndef PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_PEDIDOS_H
#define PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_PEDIDOS_H
#include <ctime>

#include <cstdlib>
#include <string>
#include <list>
#include "Producto.h"
#include "ListaEnlazada.h"
#include "Cliente.h"

using namespace std;
class Pedidos {
private:
Cliente cliente;
string ciudad;
string canal;
ListaEnlazada<Producto> Listaproductos;

public:
    Pedidos();

    const ListaEnlazada<Producto> &getListaproductos() const;

    void setListaproductos(const ListaEnlazada<Producto> &listaproductos);

    Pedidos(const Cliente &cliente, const string &ciudad, const string &canal,
            const ListaEnlazada<Producto> &productos);

    const Cliente &getCliente() const;

    void setCliente(const Cliente &cliente);

    const string &getCiudad() const;

    void setCiudad(const string &ciudad);

    const string &getCanal() const;

    void setCanal(const string &canal);

    const ListaEnlazada<Producto> &getProductos() const;

    void setProductos(const ListaEnlazada<Producto> &productos);

    float getPesototal();
    double calcularPesoTotal() const;
    bool operator<(Pedidos& otroPedidos);


};


#endif //PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_PEDIDOS_H
