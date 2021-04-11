/*89) Genere Nterminos de la serie
1-x^0, 4-x^1, 9-x^2, 16-x^3, 25-x^4,...
luego rotar los mismos hacia la derecha
Ej.:  Introduce el tamano del vector: 9
Introduce el valor de X: 3
1 - 3 ^0, 4 - 3 ^1, 9 - 3 ^2, 16 - 3 ^3, 25 - 3 ^4, 36 - 3 ^5, 49 - 3 ^6, 64 - 3 ^7, 81 - 3 ^8
 Los valores 
0, 1, 0, -11, -56, -207, -680, -2123, -6480, 
El vector girado es:
Los valores 
-6480, 0, 1, 0, -11, -56, -207, -680, -2123, 
*/
#include<iostream>
#include<math.h>
//#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void mostrar_vector(float v1[],int t){
    cout<<"Los valores \n";
    for(int i=0;i<t;i++)
    cout<<v1[i]<<", ";
}
void girar(float v1[],int n){
    float aux;
    int i;
    aux=v1[n-1];
    for(i=n-1;0<i;i--)
        v1[i]=v1[i-1];
    v1[0]=aux;
}
int main(){
    int n,x;
    float v[100];
    cout<<"Introduce el tamano del vector: ";
    cin>>n;
    cout<<"Introduce el valor de X: ";
    cin>>x;
    for(int i=0;i<n;i++){
        v[i]=(pow(i+1,2)-pow(x,i));
        if(i!=n-1)
            cout<<pow(i+1,2)<<" - "<<x<<" ^"<<i<<", ";
        else
        cout<<pow(i+1,2)<<" - "<<x<<" ^"<<i<<"\n ";
    }
    mostrar_vector(v,n);
    girar(v,n);
    cout<<"\nEl vector girado es:\n";
    mostrar_vector(v,n);
    cout<<endl; 
    return 0;
}
