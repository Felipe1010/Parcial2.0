//
// Created by Andrés on 8/03/2023.
//

#include "Producto.h"

int Producto::getId() const {
    return id;
}

void Producto::setId(int id) {
    Producto::id = id;
}

int Producto::getPeso() const {
    return peso;
}

void Producto::setPeso(int peso) {
    Producto::peso = peso;
}
