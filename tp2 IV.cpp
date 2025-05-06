#include <iostream>
using namespace std;
int main () {
int vector [10];
int min;
int max;
for(int i=0; i<10; i++){
cout<<"ingrese el numero "<<i+1<<" :";
cin>>vector[i];
    if(i == 0) {
min = vector[i];
max = vector[i];
} else {
if(vector[i] > max) {
max = vector[i];
}
if(vector[i] < min) {
min = vector[i];
}
}
}
cout<<"el numero maximo es: "<<max<<endl;
cout<<"el numero minimo es: "<<min<<endl;
}





	









		
	
	
	
	
	
	
	

