/*74) Dado un conjunto de N numeros mostrar la suma de todos aquellos que no son primos y su promedio
Ej.: Introduce la cantidad de N:3
Introduce un numero de X:4
No es primo el numero: 4
Introduce un numero de X:6
No es primo el numero: 6
Introduce un numero de X:12
No es primo el numero: 12
La cantidad de no primos es: 3, la suma es: 22, el promedio es: 7.33
*/
#include<iostream>
#include<math.h>
#include "funciones.h"
using namespace std;
int main(){
    unsigned int n,c=0,prim=0,s=0,x;
    float pro;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    while(c<n){
        c++;
        cout<<"Introduce un numero de X:";
        cin>>x;
        if (!esprimo(x)){
            cout<<"No es primo el numero: "<<x<<endl;        
            prim++;
            s=s+x;
        }      
    }
    pro=(float)s/prim;        
    cout.precision(3);    
    cout<<"La cantidad de no primos es: "<<prim<<", la suma es: "<<s<<", el promedio es: "<<pro;
    cout<<endl; 
    return 0;
}