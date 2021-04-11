/*85)   Vectores 
Ej.:  
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
/*
void leer_vector(int v1[],int t){
    cout<<"introducir valores \n";
    for(int i=0;i<t;i++)
    cin>>v1[i];
}
void mostrar_vector(int v1[],int t){
    cout<<"Los valores \n";
    for(int i=0;i<t;i++)
    cout<<v1[i]<<", ";
}
*/
void excluir(int v1[], int n){
    int aux[100],c,i;
    c=0;
    for(i=0;i<n;i++){
        if(v1[i]!=0){
            aux[c]=v1[i];
            c++;
        }
    }
    cout<<"El vector expluyendo los CEROS es:"<<endl;
        mostrar_vector(aux,c);
}
int main(){
    int n;
    int v[100];
    cout<<"Introduce el tamano del vector: ";
    cin>>n;
    leer_vector(v,n);
    mostrar_vector(v,n);
    excluir(v,n);
    cout<<endl; 
    return 0;
}
