/*89)  introducir valores en un vector y hallar los 2 numeros mayores y los dos numeros menores del
vector ademas de sacar su promedio
Ej.:  Los valores 
2, 4, 78, 2, 3, 8, 0, 4, 1, 
Los valores mayores son: 78 y  8 los menores son:0 y 1
El promedio es:11.3333
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void sacar_mayor(int v1[],int n){
    int may1,may2,min1,min2,i;
    may1=may2=0;
    min1=min2=9;
    for(i=0;i<n;i++){
        if(v1[i]>may1)
            may1=v1[i];
        if(v1[i]<min1)
            min1=v1[i];        
    }
    for(i=0;i<n;i++){
        if((v1[i]>may2) && (v1[i]!=may1))
            may2=v1[i];
        if((v1[i]<min2) && (v1[i]!=min1))
            min2=v1[i];
    }
    cout<<"\nLos valores mayores son: "<<may1<<" y  "<<may2<<" los menores son:"<<min1<<" y "<<min2;
}
float promedio(int v1[],int n){
    int s=0;
    float sol;
    for(int i=0;i<n;i++){
        s=s+v1[i];
    }
    sol=(float)s/n;
    return sol;
}
int main(){
    int n;
    int v[100];
    cout<<"Introduce el tamano del vector: ";
    cin>>n;
    leer_vector(v,n);
    mostrar_vector(v,n);
    sacar_mayor(v,n);
    cout<<endl; 
    cout<<"El promedio es:"<<promedio(v,n);
    cout<<endl; 
    return 0;
}
