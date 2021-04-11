/*87)   Llenar un vector de 20 elementos, imprimir la posicion y el valor del 
elemento mayor almacenado en el vector 
Ej.:  Los valores 
4, 6, 8, 4, 9, 2, 3, 
Elvalor mayor es: 9 esta en la posicion:5
*/

#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;

void elemento_mayor(int v1[],int n){
    int may=0,pos=0,i;
    for(i=0;i<n;i++){
        if(v1[i]>may){
            may=v1[i];
            pos=i+1;
        }
    }
    cout<<"\nElvalor mayor es: "<<may<<" esta en la posicion:"<<pos;
}
int main(){
    int n;
    int v[100];
    cout<<"Introduce el tamano del vector: ";
    cin>>n;
    leer_vector(v,n);
    mostrar_vector(v,n);
    elemento_mayor(v,n);
    cout<<endl; 
    return 0;
}
