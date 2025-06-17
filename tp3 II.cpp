#include <iostream>

using namespace std;
int main (){
 int numeros[5];
 for (int i=0; i < 5; i++){
 cout<<"ingrese el numero "<< i+1<< ":";
 cin>> numeros[i];
}
for (int i=0; i<5 - 1; i++){
for (int n=0; n<5 - 1 - i; n++){
	
	
if (numeros[n] > numeros[n+1]){
int temp = numeros[n];
numeros[n] = numeros[n+1];
numeros[n+1] = temp;}
}
}
for (int i=0; i < 5; i++){
cout<<"ordenado numericamente: "<<numeros[i]<<endl;
}
return 0;

}

