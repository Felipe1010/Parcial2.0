//
// Created by Andrés on 8/03/2023.
//

#ifndef PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_TIENDA_H
#define PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_TIENDA_H
#include "Pedidos.h"
#include <iostream>

class Tienda {
private:
    ListaEnlazada<Pedidos>ListapedidosWeb;
    ListaEnlazada<Pedidos>ListapedidosCorreo;
    ListaEnlazada<Pedidos>ListapedidosFisico;

public:
    Tienda();
void registrarPedido(Pedidos pedido);
void DespacharPedidos();

};


#endif //PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_TIENDA_H
