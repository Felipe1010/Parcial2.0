//
// Created by Andrés on 8/03/2023.
//

#include "Cliente.h"

const string &Cliente::getCliente() const {
    return cliente;
}

void Cliente::setCliente(const string &cliente) {
    Cliente::cliente = cliente;
}

const string &Cliente::getCiudad() const {
    return ciudad;
}

void Cliente::setCiudad(const string &ciudad) {
    Cliente::ciudad = ciudad;
}

Cliente::Cliente() {
    string ListaDeclientes[10]={"Andres","Felipe","Yadira"
            ,"Cristian","Camilo","Dory","Tatiana","Alba","Luciana"
            ,"Pedro"};
    cliente=ListaDeclientes[::rand()%10];

    string ListaCiudad[5]={"Sogamoso","Bogota","Socha"
            ,"Paipa","Duitama",};
    ciudad=ListaCiudad[::rand()%5];

}
