#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H
#include "Producto.h"

class ItemCarrito {
    private:
        Producto producto;
        int cantidad;
    public:
        ItemCarrito(Producto producto, int cantidad)
            : producto(producto), cantidad(cantidad) {}
        Producto getProducto(){
            return producto;
        }
        int getCantidad(){
            return cantidad;
        }
        double getSubtotal(){
            return producto.getPrecio() * cantidad; 
        }
};
#endif