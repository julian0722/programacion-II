#include <iostream>
using namespace std;
int main (){
int vector[4];
float suma=0;
float promedio;
for(int i=0; i<4; i++){
cout<<"ingrese el vector "<<i+1<<": ";
cin>>vector [i];
}
for (int a=0; a<4; a++){
suma=vector[a] + suma;
}
cout<<"El resultado de la suma es: "<<suma<<endl;
for (int b=0; b<4; b++){
promedio=suma / 4;
}
cout<<"El resultado del promedio es: "<<promedio;
}
