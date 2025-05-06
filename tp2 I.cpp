#include <iostream>
using namespace std;
int main(){
int vector[4];
int suma=0;
for (int a=0; a<4; a++){
cout<<"pone el numero "<< a+1<< ": "  ;
cin>>vector[a];
}
for (int i=0; i<4; i++){
suma=vector[i] + suma;
}
cout<<"el resultado de la suma es: "<<suma;



}
