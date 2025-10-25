#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H
#include <vector>
#include "ItemCarrito.h"
using namespace std;

class CarritoCompras {
    private:
        vector<ItemCarrito> items;
    public:
        void agregarItem(Producto producto, int cantidad){
            items.push_back(ItemCarrito(producto, cantidad));
        }
        void eliminarItem(string nombre){
            for(int i = 0; i < items.size(); i++){
                if(items[i].getProducto().getNombre() == nombre){
                    items.erase(items.begin() + i);
                    break;
                }
            }
        }
        double calcularTotal(){
            double total = 0;
            for(auto& item : items){
                total += item.getSubtotal();
            }
            return total;
        }
};
#endif