#include <iostream>
#include <string>
using namespace std;
int main (){
 string a[5];
 for (int i=0; i < 5; i++){
 cout<<"ingrese el pais "<< i+1<< ":";
 getline(cin, a[i]);
}
for (int i=0; i<5 - 1; i++){
for (int n=0; n<5 - 1 - i; n++){
	
	
if (a[n] > a[n+1]){
string temp = a[n];
a[n] = a[n+1];
a[n+1] = temp;}
}
}
for (int i=0; i < 5; i++){
cout<<"ordenado alfabeticamente: "<<a[i]<<endl;
}
return 0;

}

