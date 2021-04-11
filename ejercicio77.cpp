/*77) Leer N numeros y mostrar cuantos numeros se han leido.
Ej.: Introduce la cantidad de N:5
Introduce el valor de X:2
Introduce el valor de X:-4
-4 es un valor negativo
Introduce el valor de X:1
Introduce el valor de X:-5
-5 es un valor negativo
Introduce el valor de X:3
Introdujiste 2 terminos negativos
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int main(){
    int n,c=0,i=0,k;
    cout<<"Introduce la cantidad de N:";
    cin>>n;    
    for(i=1;i<=n;i++){
        cout<<"Introduce el valor de X:";
        cin>>k;
        if(k<0){
            c++;
            cout<<k<<" es un valor negativo\n";
        }
    }
    cout.precision(3);    //colocamos precion en el redondeo a 3 digitos en la salida
    cout<<"Introdujiste "<< c<<" terminos negativos";
    cout<<endl; 
    return 0;
}