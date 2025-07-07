#include <iostream>
using namespace std;

int main() {
    int inscriptos[5] = {0}; 
    int curso;
for (int i = 1; i <= 15; i++) {
cout << "Alumno " << i << ", elija curso (1 a 5): ";
cin >> curso;
while (curso < 1 || curso > 5 || inscriptos[curso - 1] >= 20) {
cout << "Curso invalido o lleno. Elija otro (1 a 5): ";
cin >> curso;
}
inscriptos[curso - 1]++;
}
cout << "\nCantidad de inscriptos por curso:\n";
for (int i = 0; i < 5; i++) {
cout << "Curso " << i + 1 << ": " << inscriptos[i] << " inscriptos\n";
}
return 0;
}

