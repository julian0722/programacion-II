#include <iostream>
#include <string>
using namespace std;

bool verificar(string digitos) {
if (digitos.length() <= 3) {
return true;  
} else {
return false;
}
}
int main() {
string digitos;
cout << "Ingrese un numero de hasta 3 digitos: ";
cin >> digitos;
bool resultado = verificar(digitos);
 if (resultado) {
cout << "Su numero tiene " << digitos.length() << " digitos" << endl;
} else {
cout << "Error: su numero tiene mas de 3 digitos" << endl;
}
    return 0;
}
