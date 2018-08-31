#include <iostream>
#include <string>
using namespace std;

char Calificacion;

void Mensaje (char nota){
    switch (nota){
        case 'A':
        cout<<"Excelente, todo esta bien";
        break;     
        case 'B':
        cout<<"Sobresaliente, esta bien";
        break;
        case 'C':
        cout<<"Aceptable, Se debe mejorar";
        break;
        case 'D':
        cout<<"Insuficiente, esta mal";
        break;
        case 'E':
        cout<<"Deficiente, todo esta mal";
        break;
        case 'F':
        cout<<"Muy pobre, Nada esta bien";
        break;
        default:
        cout<<"No hay una nota "<<nota<<" registrada";
        
        }
    
    }

int main() {
	cout<<"Introduzaca una calificacion: (A,B,C,D,E,F) \n";
	cin>>Calificacion;
	Mensaje(Calificacion);
	return 0;
}