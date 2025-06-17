#include <iostream>
using namespace std;
int main (){
 int numeros[5];
 for (int a=0; a < 5; a++){
 cout<<"ingrese el numero "<< a+1<< ":";
 cin>> numeros[a];
}
for (int i=1; i<5 ; i++){

int temp = numeros[i];
int j = i - 1;
while ( (numeros[j] > temp) && (j >= 0) ){

numeros[j+1] = numeros[j];
j--;}
numeros[j+1] = temp;
}
for (int i=0; i < 5; i++){
cout<<"ordenado numericamente: "<<numeros[i]<<endl;
}
return 0;

}





