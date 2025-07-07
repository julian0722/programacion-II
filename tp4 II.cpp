#include <iostream>
using namespace std;

int main() {
    int cp[4] = {1, 2, 3, 4};     
    int cs[4] = {21, 58, 32, 12}; 
    int producto, opcion;
    bool salir = true;

    while (salir) {
cout << "\n1. Mostrar lista completa de productos y stocks\n";
cout << "2. Consultar el stock de un producto por su codigo\n";
cout << "3. Cambiar el stock de un producto por su codigo\n";
cout << "4. Salir\n";
cout << "Elegi la opcion: ";
cin >> opcion;

bool encontrado = false;
int posicion = -1;
switch (opcion) {
case 1:  
for (int i = 0; i < 4; i++) {
cout << "Codigo del producto: " << cp[i]
<< " - Stock: " << cs[i] << "\n";
}
break;
case 2:  
cout << "Ingrese el codigo del producto: ";
cin >> producto;
for (int i = 0; i < 4; i++) {
if (cp[i] == producto) {
encontrado = true;
posicion = i;
break;
}
}
if (encontrado) {
cout << "El stock de ese producto es: " << cs[posicion] << "\n";
} else {
cout << "Producto no encontrado.\n";
}
break;
case 3:  // ? Cambiar stock
cout << "Ingrese el codigo del producto para cambiar el stock: ";
cin >> producto;
for (int i = 0; i < 4; i++) {
if (cp[i] == producto) {
encontrado = true;
posicion = i;
break;
}
}
if (encontrado) {
cout << "Nuevo stock: ";
cin >> cs[posicion];
cout << "Stock actualizado a: " << cs[posicion] << "\n";
} else {
cout << "Producto no encontrado.\n";
}
break;
case 4:  
salir = false;
break;
default:
cout << "Esa opcion no existe.\n";
break;
        }
    }
return 0;
}

