#include <iostream>
#include <cmath>
using namespace std;

float a,b,res;

float resultado(float A, float B){
    res=1;
    if(B==0){
        res=1;
        }
    else {    
    for(int i=1;i<=B;i++){
        res=res*A;
            cout<<i<<" "<<res<<"\n";
        } 
        }
        return res;
    }


int main() {
cout<<"Ingrese la base y el exponente \n";
cin>>a>>b;

resultado(a,b);
cout<<"el resultado es: "<<res;

return 0;
}