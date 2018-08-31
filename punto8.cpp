#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float angulo, Velocidad,t,h,R;
float g=9.8;

float t_vuelo(float theta,float Vo){
    t=(2*Vo*sin(theta))/g;
    return t;
}
 
float h_max(float theta,float Vo){
    h=(pow((Vo*sin(theta)),2))/(2*g);
    return h;
}

float R_max(float theta,float Vo){
    R=(pow(Vo,2)*sin(2*theta))/(g);
    return R;
}
 
 
void Resultados(float t,float h,float R){
    cout<<"El tiempo de vuelo del proyectil es: "<<t<<" \n";
    cout<<"La altura maxima del proyectil es: "<<h<<" \n";
    cout<<"El alcance del proyectil es: "<<R<<" \n";
    }

int main() {
cout<<"Ingrese el angulo de salida en radianes: \n";
cin>>angulo;
cout<<"Ingrese la velocidad inicial: \n";
cin>>Velocidad;
t_vuelo(angulo,Velocidad);
h_max(angulo,Velocidad);
R_max(angulo,Velocidad);
Resultados(t,h,R);
return 0;
}