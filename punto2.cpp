#include <iostream>
#include <string>
using namespace std;

int num,par,impar;

int Suma_par (int N){
    par=0;
    for(int i=1;i<=N;i++){        
        if(i%2==0){
            par=par+i;     
            }
        }
    return par;
    }

int Suma_impar (int N){
    par=0;
    for(int i=1;i<=N;i++){        
        if(i%2!=0){
            impar=impar+i;     
            }
        }
    return impar;
    }


int main() {
	cout<<"Introduzaca un número \n";
	cin>>num;
	Suma_par(num);
	cout<<"La suma de los pares hasta el número "<<num<<"es: "<<par<<"\n";
	Suma_impar(num);
	cout<<"La suma de los impares hasta el número "<<num<<"es: "<<impar<<"\n";
	return 0;
}