/*82)Leer un numero entero de mas de 4 digitos se pide intercmabiar los digitos de las 
posiciones pares con las posiciones impares.
Ej.: Introduce la cantidad de N:12345
El numero 12345 cambiando los digitos es: 13254
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int main(){
    int n,c,a,i,k,d1,d2,b;
    cout<<"Introduce la cantidad de N:";
    cin>>n;    
    a=0;
    b=0;
    i=n;
    c=1;
    while(n>0){
        a=0;
        d1=n-((int)n/10*10);
        n=(int)n/10;       
        a=a*10+d1;
        if(n>0){
            d2=n-((int)n/10*10);
            n=(int)n/10;
            a=a*10+d2;
        }            
        b=a*c+b;
        c=c*100;
    }
    cout<<"El numero "<<i<<" cambiando los digitos es: "<<b;   
    cout<<endl; 
    return 0;
}