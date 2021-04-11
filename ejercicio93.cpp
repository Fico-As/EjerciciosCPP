/*93) Llenar un vector de n valores, luego determinar que valores son punto silla.
un valor es punto silla cuando se encuentra en medio de dos valores mayores a este.
Ej.:  La salida es:
2, 4, 7, 4, 5, 7, 1 
Punto silla= 4,
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void punto_silla(int v1[],int n){
    int c,i;
    cout<<"\nPunto silla= ";
    for(i=0;i<n-1;i++){
        if((v1[i]>v1[i+1])&&(v1[i+1]<v1[i+2]))
        cout<<v1[i+1]<<", ";
    }
}
int main(){
    int n,x,c;
    int v[100];
    cout<<"Introduce la dimencion del Vector: ";
    cin>>n;
    leer_vector(v,n);
    mostrar_vector(v,n);
    punto_silla(v,n);
    cout<<endl; 
    return 0;
}

