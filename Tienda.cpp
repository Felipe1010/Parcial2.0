//
// Created by Andrés on 8/03/2023.
//
#include <algorithm>
#include "Tienda.h"
#include <algorithm>
Tienda::Tienda() {}

void Tienda::registrarPedido(Pedidos pedido) {

    if (pedido.getCanal() == "web") {
        ListapedidosWeb.agregaNodoFin(pedido);
    } else if (pedido.getCanal() == "correo") {
        ListapedidosCorreo.agregaNodoFin(pedido);
    } else if (pedido.getCanal() == "fisico") {
        ListapedidosFisico.agregaNodoFin(pedido);
    }
}
bool compararPedidos(Pedidos& pedido1, Pedidos& pedido2) {

    return pedido1.getPesototal()< pedido2.calcularPesoTotal();
}
void Tienda::DespacharPedidos() {
    ListaEnlazada<Pedidos> listaTodosPedidos;
    listaTodosPedidos.concatenarLista(ListapedidosWeb);
    listaTodosPedidos.concatenarLista(ListapedidosCorreo);
    listaTodosPedidos.concatenarLista(ListapedidosFisico);

    // Ordenar la lista de pedidos
    for (auto it1 = listaTodosPedidos.begin(); it1 != listaTodosPedidos.end(); it1++) {
        for (auto it2 = listaTodosPedidos.begin(); it2 != listaTodosPedidos.end(); it2++) {
            if (it1->getInfo().calcularPesoTotal() < it2->getInfo().calcularPesoTotal()) {
                std::swap(*it1, *it2);
            }
        }
    }

    // Mostrar la lista de pedidos despachados en el orden solicitado
    std::cout << "Pedidos despachados:" << std::endl;
    for (auto pedido : listaTodosPedidos.getList()) {
        std::cout << "Cliente: " << pedido.getCliente().getCliente() << std::endl;
        std::cout << "Ciudad: " << pedido.getCiudad() << std::endl;
        std::cout << "Canal: " << pedido.getCanal() << std::endl;
        std::cout << "Productos:" << std::endl;
        for (auto producto : pedido.getListaproductos().getList()) {
            std::cout << "Id: " << producto.getId() << ", peso: " << producto.getPeso() << std::endl;
        }
        std::cout << "Peso total: " << pedido.calcularPesoTotal() << std::endl;
        std::cout << std::endl;
    }
}



