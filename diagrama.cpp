#include <iostream>
using namespace std;

int main() {
    int V[8] = {-3, -1, 2, 5, 6, 7, 9, 17};
    int suma = 0;
    float prom;
    int E, pos;
for (int i = 0; i < 8; i++) {
suma += V[i];
}
prom = suma / 8.0;
E = V[0];
pos = 1;
for (int i = 0; i < 8; i++) {
if (V[i] <= prom && V[i] > E) {
E = V[i];
pos = i + 1;
  }
    }
cout << "PROM = " << prom << endl;
cout << "E = " << E << endl;cout << "POS = " << pos << endl;
return 0;
}

