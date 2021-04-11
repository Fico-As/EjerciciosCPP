/*105) Dado un Matriz A y B realizar losiguiente:
suma de matrices.
resta de matrices.
multiplicacion de matrices.
Ej.: Introduce la dimencion de la matriz: 3
Matriz A
   3   6   7
   5   3   5
   6   2   9
Matriz B
   1   2   7
   0   9   3
   6   0   6
Suma de Matrices A y B
   6   12   14
   10   6   10
   12   4   18
Resta de Matrices A y B
   2   4   0
   5   -6   2
   0   2   3
Multiplicacion de Matrices A y B
   45   60   81
   35   37   74
   60   30   102
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void suma_matrices(int m1[][20],int m2[][20],int n){
    int mx[20][20];
    int f,c;
    for(f=1;f<=n;f++){
        for(c=1;c<=n;c++){
            mx[f][c]=m1[f][c]+m1[f][c];
        }
    }
    mostrar_matriz(mx,n,n);
}
void resta_matrices(int m1[][20],int m2[][20],int n){
    int mx[20][20];
    int f,c;
    for(f=1;f<=n;f++){
        for(c=1;c<=n;c++){
            mx[f][c]=m1[f][c]-m2[f][c];
        }
    }
    mostrar_matriz(mx,n,n);
}
void multiplicacion_matrices(int m1[][20],int m2[][20],int n){
    int mx[20][20];
    int f,c,s;
    for(f=1;f<=n;f++){
        s=0;
        for(c=1;c<=n;c++){
            s=0;
            for(int k=1;k<=n;k++)
                s=s+m1[f][k]*m2[k][c];
            mx[f][c]=s;
        }
    }
    mostrar_matriz(mx,n,n);
}
int main(){
    int n,c;
    int a[20][20],b[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    cargar_matriz_random(a,n,n,10);
    cargar_matriz_random(b,n,n,10);
    cout<<"Matriz A"<<endl;
    mostrar_matriz(a,n,n);
    cout<<"Matriz B"<<endl;
    mostrar_matriz(b,n,n);
    cout<<"Suma de Matrices A y B"<<endl;
    suma_matrices(a,b,n); 
    cout<<"Resta de Matrices A y B"<<endl;
    resta_matrices(a,b,n);
    cout<<"Multiplicacion de Matrices A y B"<<endl;
    multiplicacion_matrices(a,b,n);
    cout<<endl; 
    return 0;
}

