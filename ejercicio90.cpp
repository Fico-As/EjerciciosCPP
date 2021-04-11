/*89) Dado un vector A de n elementos ordenados se pide insertar un elemento K en la posicion 
que le corresponde.
Ej.:  Los valores 
34, 7, 9, 2, 4, 65, 34, 
Los valores ordenados son
Los valores 
2, 4, 7, 9, 34, 34, 65, 
Introduce un valor de K: 20
Los valores 
2, 4, 7, 9, 20, 34, 34, 65, 
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void ordenar_vector(int v1[],int n){
    int i,j,aux;
    for(i=0;i<n;i++){
        aux=0;
        for(j=0;j<n-1;j++){
            if(v1[j]>v1[j+1]){
                aux=v1[j];
                v1[j]=v1[j+1];
                v1[j+1]=aux;
            }
        }
    }    
}
void insertar_en_vector(int v1[],int n,int k){
    int vx[n+1];    
    int c,i,j,sw=0;
    c=0;
    for(i=0;i<n;i++){
        if((k<v1[i])&&sw==0){
            vx[c]=k;
            c++;
            sw=1;
        }
        vx[c]=v1[i];
        c++;
    }
    for(i=0;i<n+1;i++)
        v1[i]=vx[i];
}
int main(){
    int n,x;
    int v[100];
    cout<<"Introduce el tamano del vector: ";
    cin>>n;
    leer_vector(v,n);
    mostrar_vector(v,n);
    ordenar_vector(v,n);
    cout<<"\nLos valores ordenados son";
    mostrar_vector(v,n);
    cout<<"\nIntroduce un valor de K: ";
    cin>>x;
    insertar_en_vector(v,n,x);
    mostrar_vector(v,n+1);
    cout<<endl; 
    return 0;
}
