#include <iostream>
#include "Usuario.h"
using namespace std;

int main(){
    Producto p1("Camisa", 20, 100);
    Producto p2("Pantalon", 30, 60);
    Producto p3("Zapatos", 15, 150);
    Producto p4("Chaqueta", 25, 80);

    CarritoCompras carrito;
    carrito.agregarItem(p1, 2);
    carrito.agregarItem(p3, 1);
    cout << "Total del carrito: $" << carrito.calcularTotal() << endl;

    Usuario u("Nicolas");
    u.guardarCompra(carrito);

    cout << "Compra realizada por: " << u.getNombre() << endl;

    return 0;
}