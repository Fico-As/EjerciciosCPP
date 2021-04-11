/*103) Generar la siguiente Matriz zic zac
Ej.:  Introduce la dimencion de la matriz: 4
    1   2   4   7
    3   5   8   11
    6   9   12  14
    10  13  15  16
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void generar_matriz_czac(int m[20][20],int n, int n1){
    int f,c,t,c1;
    int sw, cont;
    c1=0;
    sw=1;
    cont=1;
    while(cont<=n*n1){
        if((c1<n) && (sw==1)){
            c1++;
            t=1;
            f=1;
        }
        else{
            c1=n;
            t++;
            f=t;
            sw=0;
        }
        for(c=c1;c>=t;c--){
            m[f][c]=cont;
            cont++;
            f++;
        }
    }
    
}
int main(){
    int n,c;
    int a[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    cargar_matriz_ceros(a,n,n);
    mostrar_matriz(a,n,n);
    cout<<endl;
    generar_matriz_czac(a,n,n);
    mostrar_matriz_xy(a,n,n);
    //system("clear");   
    cout<<endl; 
    return 0;
}

