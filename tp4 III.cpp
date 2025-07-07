/*
Determine la temperatura más alta y la más baja del mes.
Calcule la temperatura promedio.
Cuente cuántos días tuvieron temperaturas inferiores a 10°C
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int temp[30] = {9,15,3,22,6,26,4,13,15,1,23,8,25,11,14,36,22,31,21,11,8,15,22,20,27,10,8,17,25,7};
    int inferior=0;
    int baja= *min_element(temp, temp + 30);
    int alta= *max_element(temp, temp + 30);
    int sum=0;
    for (int i = 0; i < 30; i++) {
        sum=sum+temp[i];
    }
    int prom=sum/30;
for (int i = 0; i < 30; i++) {
if (temp[i] < 10 ) {
inferior=inferior+1;
}
}
cout<< "la temperatura mas alta fue: "<<alta<<"\n";
cout<<"la temperatura mas baja fue: "<<baja<<"\n";
cout<<"las temperaturas inferiores a 10 son: "<<inferior<<"\n";
cout<<"el promedio de las temperaturas es de: "<<prom<<"\n";  
    return 0;
}
