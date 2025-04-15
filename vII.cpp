#include <iostream>
using namespace std;
int funcion ();
int main (){
	
funcion();

}
int funcion (){
	
float retirar, ingresar;
float plata = 10000;
 char salir;
cout<<"bienvenido al cajero automatico: "<<endl;
while(true){
cout<<"¿que operacion desea realizar? "<<endl;
cout<<"a.retirar	b.consultar saldo	c.ingresar	d.salir"<<endl;
cin>>salir;
switch (salir){
case 'a':
cout<<"total a retirar: "; cin>>retirar;	
cout<<"usted retiro $"<<retirar<<endl;	
plata=plata-retirar;	
	
break;
case 'b':
cout<<"su saldo es de: "<<plata<<endl;
break;

case'c':
cout<<"cuanta plata desea ingresar: ";
cin>>ingresar;
plata=plata+ingresar;
break;

case'd':
cout<<"Hasta luego";
return 0;
break;
}
system("pause");
system("cls");

}


	
	
	
}
