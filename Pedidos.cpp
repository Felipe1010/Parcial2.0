//
// Created by Andrés on 7/03/2023.
//

#include "Pedidos.h"



Pedidos::Pedidos() {}



const Cliente &Pedidos::getCliente() const {
    return cliente;
}

void Pedidos::setCliente(const Cliente &cliente) {
    Pedidos::cliente = cliente;
}

const string &Pedidos::getCiudad() const {
    return ciudad;
}

void Pedidos::setCiudad(const string &ciudad) {
    Pedidos::ciudad = ciudad;
}

const string &Pedidos::getCanal() const {
    return canal;
}

void Pedidos::setCanal(const string &canal) {
    Pedidos::canal = canal;
}

const ListaEnlazada<Producto> &Pedidos::getProductos() const {
    return Listaproductos;
}

void Pedidos::setProductos(const ListaEnlazada<Producto> &productos) {
    Pedidos::Listaproductos = productos;
}

float Pedidos::getPesototal() {
    float pesoTotal = 0.0;
    std::list<Producto> listaProductos = Listaproductos.getList();
    for (std::list<Producto>::iterator it = listaProductos.begin(); it != listaProductos.end(); ++it) {
        pesoTotal += it->getPeso();
    }
    return pesoTotal;
}

bool Pedidos::operator<(Pedidos &otroPedidos) {
    return getPesototal() > otroPedidos.getPesototal();;
}

double Pedidos::calcularPesoTotal() const {
    double pesoTotal = 0.0;
    list<Producto> listaProductos = Listaproductos.getList();
    for (std::list<Producto>::iterator it = listaProductos.begin(); it != listaProductos.end(); ++it) {
        pesoTotal += it->getPeso();
    }
    return pesoTotal;
}

Pedidos::Pedidos(const Cliente &cliente, const string &ciudad, const string &canal,
                 const ListaEnlazada<Producto> &productos) {

}

const ListaEnlazada<Producto> &Pedidos::getListaproductos() const {
    return Listaproductos;
}

void Pedidos::setListaproductos(const ListaEnlazada<Producto> &listaproductos) {
    Listaproductos = listaproductos;
}




