/*105) Dado un Matriz A de n,n pide hallar la suma de la diagonal principal y la 
diagonal secundaria.
Ej.:  Introduce la dimencion de la matriz: 5
   3   6   7   5   3
   5   6   2   9   1
   2   7   0   9   3
   6   0   6   2   6
   1   8   7   9   2
la suma diagonal principal es: 16 la suma de la diagonal secundaria es: 12
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void suma_diagonales(int m[20][20],int n){
    int f,c,dp,ds;
    dp=0;
    ds=0;
    for(f=1;f<=n;f++){
        for(c=1;c<=n;c++){
            if(c==f)
                dp=dp+m[f][c];
            if(f+c==n+1)
                ds=ds+m[f][c];
        }
    }
    cout<<"la suma diagonal principal es: "<<dp<<" la suma de la diagonal secundaria es: "<<ds;  
}
int main(){
    int n,c;
    int a[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    cargar_matriz_random(a,n,n,10);
    mostrar_matriz(a,n,n);
    cout<<endl;
    suma_diagonales(a,n); 
    cout<<endl; 
    return 0;
}

