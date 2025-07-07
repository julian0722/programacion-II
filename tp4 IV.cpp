#include <iostream>
using namespace std;

int main() {
int libro[50] = {0, 1, 0, 1, 0, 1, 0, 0, 1, 0,1, 0, 1, 1, 0, 0, 0, 1, 0, 0,0, 1, 0, 1, 0, 1, 0, 1, 0, 0,1, 0, 1, 0, 1, 1, 1, 0, 0, 1,1, 0, 1, 0,1, 1, 0, 1, 0, 0};
int edad[50] = {15, 16, 32, 17, 41, 22, 13, 19, 52, 14,15, 18, 32, 16, 28, 16, 30, 18, 26, 14,27, 10, 37, 28, 31, 34, 21, 11, 31, 36,39, 12, 25, 43, 49, 12, 26, 17, 53, 54,36, 27, 13, 19, 31, 62, 24, 14, 25, 33};
int educacion[50] = {5, 2, 3, 5, 1, 3, 3, 5, 3, 2,1, 5, 4, 3, 3, 1, 3, 2, 1, 5,3, 4, 3, 1, 2, 5, 2, 3, 2, 1,5, 5, 1, 2, 4, 3, 2, 2, 5, 2,3, 1, 1, 3, 2, 2, 1, 5, 2, 1};

int mayores= 0;
int Ficcion = 0;
int primaria = 0;
int incompleta = 0;
int completa = 0;
int terci = 0;
int Uni = 0;
int Encuestados = 50;

for (int i = 0; i < Encuestados; ++i) {
if (edad[i] >= 18) {
++mayores;
}
if (libro[i] == 1) {  
++Ficcion;
}
switch (educacion[i]) {
case 1: ++primaria; break;
case 2: ++incompleta; break;
case 3: ++completa; break;
case 4: ++terci; break;
case 5: ++Uni; break;
default: break;
}
}

int porcentajeficcion = (Ficcion * 100) / Encuestados;
int porcentajenoficcion = 100 - porcentajeficcion;

cout << "Numero total de encuestados mayores a 18 años: " << mayores<< "\n";
cout << "Porcentaje de lectores de ficcion: " << porcentajeficcion << "%\n";
cout << "Porcentaje de lectores de no ficcion: " << porcentajenoficcion << "%\n";
cout << "Numero total con primaria completa: " << primaria << "\n";
cout << "Numero total con secundaria incompleta: " << incompleta << "\n";
cout << "Numero total con secundaria completa: " << completa << "\n";
cout << "Numero total con terciario: " << terci << "\n";
cout << "Numero total con universidad: " << Uni << endl;

    return 0;}
