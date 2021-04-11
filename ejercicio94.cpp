/*94) Llenar un vector de n valores, luego determinar que valores son punto silla.
un valor es punto silla cuando se encuentra en medio de dos valores mayores a este.
Ej.:  La salida es:
2, 4, 7, 4, 5, 7, 1 
Punto silla= 4,
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void elimina_repetido(int v1[],int n,int *cant){
    int d,c,i,j,cont,k,z,num;
    int vx[100],vf[100];
    cont=0;
    i=0;
    j=0;
    k=0;
    z=0;
    num=0;
    for(i=0;i<n;i++){
        cont=0;
        num=v1[i];
        vx[j]=num;
        j++;
        for(k=0;k<n;k++){
            if(vx[k]==num){
                cont++;
            }
        }
        if(cont==1){
            vf[z]=num;
            z++;
        }
    }
    *cant=z;
    for(k=0;k<z;k++)
        v1[k]=vf[k];
}
int main(){
    int n,x,c;
    int v[100];
    cout<<"Introduce la dimencion del Vector: ";
    cin>>n;
    leer_vector(v,n);
    mostrar_vector(v,n);
    elimina_repetido(v,n,&c);
    mostrar_vector(v,c);
    cout<<endl; 
    return 0;
}

