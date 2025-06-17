#include <iostream>
#include <vector>

using namespace std;

int main() {
  int num;
cout << "Ingrese la cantidad de elementos del vector: ";
cin >> num;
vector<int> numeros(num);
cout << "Ingrese los elementos del vector:\n";
for (int i = 0; i < num; ++i) {
cout << "Elemento " << i + 1 << ": ";
cin >> numeros[i];
  }
int busqueda;
cout << "Ingrese el numero que quiere buscar: ";
cin >> busqueda;
bool esta = false;
for (int i = 0; i < num; ++i) {
if (numeros[i] == busqueda) {
esta = true;
cout << " el numero " << busqueda << " se encuentra la posicion " << i + 1 << endl;
break;
}
}

if (!esta) {
cout << " el numero " << busqueda << " no se encuentra en el vector." << endl;
}
return 0;
}

