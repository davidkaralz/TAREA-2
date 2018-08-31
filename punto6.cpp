#include <iostream>
#include <string>
using namespace std;

int n1,n2,n3,n4,n5,n6,mayor;

int N_mayor(int N1,int N2){
    
    mayor= (N1>=N2)? N1:N2;
    
    return mayor;
    }

int main()
{
  cout << "Ingrese 2 numeros: \n";
  cin>>n1>>n2;
  N_mayor(n1,n2);
  cout<<"el mayor de los 2 numeros es "<<mayor<<"\n";
  mayor=0;
  cout << "Ingrese 6 numeros: \n";
  cin>>n1;
  cin>>n2;
  cin>>n3;
  cin>>n4;
  cin>>n5;
  cin>>n6;
  N_mayor(mayor,n1);
  N_mayor(mayor,n2);
  N_mayor(mayor,n3);
  N_mayor(mayor,n4);
  N_mayor(mayor,n5);
  N_mayor(mayor,n6);
  cout<<"el mayor de los 6 numeros es "<<mayor<<"\n";
}