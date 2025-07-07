#include <iostream>
using namespace std;

int main() {
int votos[3] = {0, 0, 0}; 
int opcion, producto;
int total= 0;
bool continuar = true;
cout << "*** ACCESO A ENCUESTA ***" << endl;
while (continuar) {
cout << "\nDesea realizar encuesta? 1: si   2: no : ";
cin >> opcion;
switch (opcion) {
case 1:
cout << "\nPRODUCTOS PARTICIPANTES:\n";
cout << "1- PRODUCTO A\n";
cout << "2- PRODUCTO B\n";
cout << "3- PRODUCTO C\n";
cout << "Ingrese el numero de su producto favorito: ";
cin >> producto;
switch (producto) {
case 1:
case 2:
case 3:
votos[producto - 1]++;
total++;
cout << "Voto registrado\n";
break;
default:
cout << "ingrese los numeros antes mencionados\n";
}
break;
case 2:
continuar = false;
break;
default:
cout << "ingrese los numeros antes mencionados\n";
break;
}
}
cout << "\n*** RESULTADOS DE LA ENCUESTA ***\n";
cout << "Votos para el producto A: " << votos[0] << endl;
cout << "Votos para el producto B: " << votos[1] << endl;
cout << "Votos para el producto C: " << votos[2] << endl;
cout << "votaciones echas: " << total << endl;
if (votos[0] > votos[1] && votos[0] > votos[2]) {
    cout << "Producto A tiene mas votos: " << votos[0] << endl;
} else if (votos[1] > votos[0] && votos[1] > votos[2]) {
    cout << "Producto B tiene mas votos: " << votos[1] << endl;
} else if (votos[2] > votos[0] && votos[2] > votos[1]) {
    cout << "Producto C tiene mas votos: " << votos[2] << endl;
} else {
    cout << "Hay un empate en la cantidad de votos." << endl;
}
return 0;
}
