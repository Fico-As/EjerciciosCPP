/*73) Leer n numeros determinar cuantos son primos, cuantos son pares, e impares.
Ej.: Introduce la cantidad de N:3
Introduce un numero de X:12
El numero: 12 es PAR
Introduce un numero de X:6
El numero: 6 es PAR
Introduce un numero de X:7
El numero: 7 Es PRIMO
El numero: 7 es IMPAR
*/
#include<iostream>
#include<math.h>
#include "funciones.h"
using namespace std;
int main(){
    unsigned int n,c=0,prim=0,par=0,imp=0,x;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    while(c<n){
        c++;
        cout<<"Introduce un numero de X:";
        cin>>x;
        if (esprimo(x)){
            cout<<"El numero: "<<x<<" Es PRIMO\n";        
            prim++;
        }
        if(x%2==0){
            par++;
            cout<<"El numero: "<<x<<" es PAR\n"; 
        }
        else{
            imp++;
            cout<<"El numero: "<<x<<" es IMPAR\n"; 
        }       
    }
            
    //cout.precision(3);
    cout<<"La camtidad de primos es:"<<prim<<" los pares son: "<<par<<", los impares son:"<<imp;
    cout<<endl; 
    return 0;
}