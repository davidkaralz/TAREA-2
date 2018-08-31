#include <iostream>
#include <string>
using namespace std;

int filas;

void impresion(int num){
    for(int i=1;i<=num;i++){
        for(int j=num;j>=1;j--){
            if (j>i){
                cout<<' ';
                }
            else
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main() {
cout<<"ingrese el numero de filas \n";
cin>>filas;
impresion (filas);
return 0;
}