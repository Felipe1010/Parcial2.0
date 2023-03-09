#include <iostream>
#include <cstdlib>
#include "ListaEnlazada.cpp"
using namespace std;
void menu();

int GenerarAleatorio(int Lim_Inf,int Lim_Sup);
//ingresos por pilas
//
void cargarDatosDePersonas();

int lim_Sup=0;
int lim_Inf=0;
int Aleatorio=0;
        int main() {
/*
    //inicializo valores
    ListaEnlazada<string> *Lista= new ListaEnlazada<string>();
    Lista->agregaNodoFin("Centro");
    Lista->agregaNodoInicio("Arriba 1");
    Lista->agregaNodoFin("Abajo 1");
    Lista->agregaNodoInicio("Arriba 2");
    Lista->agregaNodoFin("Abajo 2");




    for (string numero:Lista->getList()){
        std::cout<<numero<<std::endl;
    }
    return 0;
    */


menu();
}

void menu() {
    int op=0;

    while (true){


        cout << "-------Menu---------" << endl << "1.Cargar datos de persona" << endl
             << "2.pedidos" << endl <<
             "3.pedidos organizados seguna canal de comunicacion" << endl
             <<"4.Mostrar pedidos despachados en orden solicitado"<< endl

             <<"5.Salir"<< endl;
        cin >> op;



        switch (op) {

            case 1:
cargarDatosDePersonas();

                break;
            case 2:

                break;
            case 3:



                break;

            case 4:





                break;
            case 5:
                cout<<"Saliendo..."<<endl;

                return;

            default:
                cout<<"opcion no valida, por favor elige una opcion del menu"<<endl;


                break;

        }
    }
}

void cargarDatosDePersonas() {

}

int GenerarAleatorio( int Lim_Inf,int Lim_Sup) {
    srand(time(NULL));

    // Generar un número aleatorio dentro del rango
    int num = rand() % (Lim_Sup - Lim_Inf + 1) + Lim_Inf;
    return num;
}
