#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;
class Producto {
    private:
        string nombre;
        double precio;
        int Stock;
    public:
        Producto(string nombre, double precio, int Stock)
            : nombre(nombre), precio(precio), Stock(Stock) {}
        string getNombre(){
            return nombre;
        }
        double getPrecio(){
            return precio;
        }
        int getStock(){
            return Stock;
        }
        void ReducirStock(int cantidad) {
            Stock -= cantidad;
        }
};
#endif