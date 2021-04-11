/*100) Generar la siguiente Matriz cubo magico
Ej.:  Introduce la dimencion de la matriz: 5
   17  24  1   8   15
   23  5   7   14  16
   4   6   13  20  22
   10  12  19  21  3
   11  18  25  2   9
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void mostrar_matriz(int m[20][20],int n,int n1){
    int f,c;
    for(int f=1;f<=n;f++){
        for(c=1;c<=n1;c++){
            cout<<"   "<<m[f][c];
        }
        cout<<endl;
    }
}
void mostrar_matriz_xy(int m[20][20],int n,int n1){
    int f,c;
    system("clear");
    for(int f=1;f<=n;f++){
        for(c=1;c<=n1;c++){
            cout<<gotoxy1(f+2,c*4)<<m[f][c];
        }
        cout<<endl;
    }
}
void cargar_matriz_random(int a[20][20], int n,int n1){
    int c,i;
    for(i=1;i<=n;i++){
        for(c=1;c<=n1;c++){
            a[i][c]=rand()%10;
        }        
    }
}
void cargar_matriz_ceros(int a[20][20], int n,int n1){
    int c,i;
    for(i=1;i<=n;i++){
        for(c=1;c<=n1;c++){
            a[i][c]=0;
        }        
    }
}
void cubo_magico(int m[20][20],int n){
    int f, c,i;
    f=1;
    c=(n+1)/2;
    for(i=1;i<=n*n;i++){
        if(f<1)
            f=n;
        if(c>n)
            c=1;
        m[f][c]=i;
        f--;
        c++;
        if(i%n==0){
            f=f+2;
            c=c-1;
        }
    }
}
int main(){
    int n,c,d;
    int a[20][20];
    int b[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    cubo_magico(a,n);    
    mostrar_matriz_xy(a,n,n);
    //system("clear");   
    cout<<endl; 
    return 0;
}

