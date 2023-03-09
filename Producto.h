//
// Created by Andrés on 8/03/2023.
//

#ifndef PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_PRODUCTO_H
#define PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_PRODUCTO_H


class Producto {
private:
    int id;
    int peso;
public:

    Producto(int id, float peso) {
        this->id = id;
        this->peso = peso;
    }

    int getId() const;

    void setId(int id);

    int getPeso() const;

    void setPeso(int peso);
};


#endif //PARCIAL_LISTAENLAZADA_ANDRES_SANABRIA_PRODUCTO_H
