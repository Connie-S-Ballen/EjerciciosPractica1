#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <vector>
#include "CarritoCompras.h"
using namespace std;

class usuario{
    private:
        string nombre;
        vector<CarritoCompras> historial;
    public:
        usuario(string nombre): nombre(nombre) {}

        void guardarCompra(CarritoCompras carrito){
            historial.push_back(carrito);
        }
        string getNombre(){
            return nombre;
        }
};
#endif