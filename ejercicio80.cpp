/*80) Verificar si un numero X es curioso, un numero es curioso cuando se repite al final de su producto
Ej.: Introduce la cantidad de N:4
Introduce el valor de X:111
111 NO es numero CURIOSO
Introduce el valor de X:5
5 es numero CURIOSO
Introduce el valor de X:25
25 es numero CURIOSO
Introduce el valor de X:125
125 NO es numero CURIOSO
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
        if(curioso(k))
            cout<<k<<" es numero CURIOSO\n";
        else
            cout<<k<<" NO es numero CURIOSO\n";        
    }
    cout.precision(3);    //colocamos precion en el redondeo a 3 digitos en la salida
    cout<<endl; 
    return 0;
}