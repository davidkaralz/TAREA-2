#include <iostream>
#include <string>
using namespace std;

string frase, frase2;

int largo, vocales, consonantes;

string Mayuscula(string frase){
    for(char c:frase){ 
        c=(c-32);
        frase2 += c;
    }	
return frase2;
}


int main() {
cout<<"Escriba una frase \n";
getline(cin,frase);
Mayuscula(frase);
cout<<frase2<<"\n";
return 0;
}