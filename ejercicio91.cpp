/*91) Hallar el elemento mayor  y menor de un vector
Ej.:  Los valores 
3, 6, 3, 7, 9, 
El valor mayor es: 9 el valor menor es: 3
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void min_may_vector(int v1[],int n){
    int may, min, i;
    may=0;
    min=9;
    for(i=0;i<n;i++){
        if(v1[i]>may)
            may=v1[i];
        if(v1[i]<min)
            min=v1[i];
    }
    cout<<"\nEl valor mayor es: "<<may<<" el valor menor es: "<<min;
}
int main(){
    int n,x;
    int v[100];
    cout<<"Introduce el tamano del vector: ";
    cin>>n;
    leer_vector(v,n);
    mostrar_vector(v,n);
    min_may_vector(v,n);
    //mostrar_vector(v,n);
    cout<<endl; 
    return 0;
}
