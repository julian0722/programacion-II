#include <iostream>
using namespace std;
void resultado(float cantidad){
float entrada= 5000;
float valor;
float total;
if (cantidad==2){
valor= entrada - entrada * 0.1;
total= valor * 2 ;
cout<<"el valor de cada entrada seria de:"<<valor<<endl<<"Debe abonar:"<<total<<endl;
}else if (cantidad==3){
valor= entrada - entrada * 0.15;
total= valor * 3;
cout<<"el valor de cada entrada seria de:"<<valor<<endl<<"Debe abonar:"<<total<<endl;	
}else if (cantidad==4){
valor= entrada - entrada * 0.20;
total= valor * 4;
cout<<"el valor de cada entrada seria de:"<<valor<<endl<<"  Debe abonar:"<<total<<endl;
}else if (cantidad==1){
cout<<"el valor de la entrada seria de:"<<entrada<<endl;
}else{
cout<<"no puede comprar mas de 4 entradas "<<endl;
}
}
int main (){
float cantidad;
cout<<"cuantas entradas desea comprar (maximo 4): ";
cin>>cantidad;
resultado(cantidad);
return 0; 
}
