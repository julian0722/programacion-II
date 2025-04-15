#include <iostream>
using namespace std;

bool nivel (float preguntas, float aciertos){

float porcentaje= aciertos/preguntas * 100;
if(porcentaje>=90){
cout<<"nivel maximo";
}else if (porcentaje>=75 && porcentaje<90){
cout<<"nivel medio";
}else if (porcentaje>=50 && porcentaje<75){
cout<<"nivel regular";
}else{
cout<<"fuera de nivel";

return true;
}
}
int main (){
float preguntas;
float aciertos;
cout<<"ingrese la cantidad de preguntas que se realizaron: ";
cin>>preguntas;
cout<<"ingrese las respuestas correctas: ";
cin>>aciertos;
bool resultado=nivel(preguntas, aciertos);
return 0;
}
