#include <iostream>
using namespace std;
bool verificacion(int num1,int num2,int num3){
if (num1<=10 && num2<=10 && num3<=10){
return true;
}
else if (num1>10 && num2>10 && num3>10){
return false;	
}else {
return false;
}
}
int main (){
int num1;
int num2;
int num3;
cout<<"ingrese su primer numero: ";
cin>>num1;
cout<<"ingrese su segundo numero: ";
cin>>num2;
cout<<"ingrese su tercer numero: ";
cin>>num3;
bool total= verificacion(num1, num2, num3);
if(total){
cout<<"todos los numeros son menores a 10";
 }
else {
cout<<"hay numeros mayores a 10";
}
   return 0;
}



