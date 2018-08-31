#include <iostream>
#include <string>
using namespace std;

char opcion;

char evaluacion(int I){
    if ((I%3==0)&&(I%5==0)){
            opcion='a';}
            else if (I%3==0){
                opcion='b';}
                else if (I%5==0){
                    opcion='c';}
                    else 
                    opcion='d';        
    return opcion;
}
void impresion(char op, int num){
    switch(op){
        case 'a':
        cout<<"FizzBuzz \n";
        break;
        case 'b':
        cout<<"Fizz \n";
        break;
        case 'c':
        cout<<"Buzz \n";
        break;
        case 'd':
        cout<<num<< "\n";
        break;
        }
    
}

int main() {

    for(int i=1;i<=100;i++){
        evaluacion (i);
        impresion (opcion,i);
        }
        
        return 0;
}