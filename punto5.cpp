#include <iostream>
#include <string>
using namespace std;

string frase;
int largo, vocales, consonantes;

int Vocal(string oracion){
    vocales=0;
    for(char v:frase){
    if (v=='a'||v=='A'||v=='e'||v=='E'||v=='i'||v=='I'||v=='o'||v=='O'||v=='u'||v=='U'){
    vocales++;  
        }        
    }
    return vocales;
}

int Conso(string oracion){
    consonantes =0;
    for(char c:frase){
    if (c!='a'&&c!='A'&&c!='e'&&c!='E'&&c!='i'&&c!='I'&&c!='o'&&c!='O'&&c!='u'&&c!='U'&&c!=' '){
    consonantes++;
        }    
    }
    return consonantes;
}

int main() {
cout<<"Escriba una frase \n";
getline(cin,frase);
Vocal(frase);
Conso(frase);
cout<<"La frase tiene: "<<vocales<<" vocales y "<<consonantes<<" consonantes\n";
return 0;
}