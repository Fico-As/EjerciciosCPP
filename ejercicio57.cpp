//Dado un numero N entero positivo contar el numero de digitos pares e impares que tiene
//Introduce la cantidad de N:179832
//2 digitos son pares,  4 digitos son impares
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,par,impar,d1,n1;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    par=0;    
    impar=0;
    while (n>0){
            d1=n-((int)n/10*10);
            if (d1%2==0)
                par++;
            else
                impar++;
            n=(int)n/10;
        }
            cout<<par<<" digitos son pares,  "; 
            cout<<impar<<" digitos son impares";   
    cout<<endl; 
    return 0;
}