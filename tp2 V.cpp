#include <iostream>
using namespace std;
int main(){
float vector[5];	
int altas=0; 
int bajas=0;
float prom, sum;
for(int i=0; i<5; i++){
cout<<"ingrese la medida de la persona "<<i+1<<" :";
cin>>vector[i];
sum=sum + vector[i];
}

prom=sum/5;
cout<<"el promedio es: "<<prom<<endl;
for (int i = 0; i < 5; i++) {
if (vector[i] > prom) {
altas++;  
} else if (vector[i] < prom) {
bajas++; 
}
}
cout << "Numero de personas mas altas que el promedio: " << altas << endl;
cout << "Numero de personas mas bajas que el promedio: " << bajas << endl;
	
return 0;	
	
	

}
