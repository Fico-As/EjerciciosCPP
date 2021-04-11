/*62) Dado un numero entero N positivo de mas de 6 digitos construir otros dos 
numeros A y B donde A este formado por los digitos pares de N y B esta formado por 
los digitos impares de N.
Ej.: Introduce la cantidad de R:345123
El valor de A=42 el valor de B=3513
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,a,a1,b,b1,d1;
    cout<<"Introduce la cantidad de R:";
    cin>>n;
    a=0;
    a1=1;
    b=0;
    b1=1;
    while (n>0){
        d1=n-((int)n/10*10);
        n=(int)n/10;
        if(d1%2==0){
            a=d1*a1+a;
            a1*=10;
        }
        else{
            b=d1*b1+b;
            b1*=10;
        }
    }
    cout<<"El valor de A="<<a<<" el valor de B="<<b;
    cout<<endl; 
    return 0;
}