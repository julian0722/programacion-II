#include <iostream>
using namespace std;
int main(){
int nota1;
int nota2;
int nota3;
int promedio;  
cout<<" en el primer trimestre su nota es de: ";
cin>>nota1;
cout<<"en el segundo trimestre su nota es de: ";
cin>>nota2;
cout<<"en el tercer trimestre su nota es de: "; 
cin>>nota3;
promedio= (nota1+nota2+nota3) /3;
cout<<"su promedio es de: "<<promedio;
if (promedio>=7){
cout<<" promocionado";
}else{
cout<<" reprobado";
}
return 0;
} 
