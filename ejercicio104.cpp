/*103) Generar la siguiente Matriz pascal
Ej.:  Introduce la dimencion de la matriz: 5
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void generar_matriz_pascal(int m[20][20],int n){
    int f,c,ini,fin;
    int aux, col;
    c=n;
    f=0;
    aux=0;
    while(f<n){
        f++;
        if(f==1 )
            m[f][c]=1;
        if(f==2){
            m[f][ini]=1;
            m[f][fin]=1;
        }
        if(f>2){
            for(col=ini;col<=fin;col=col+2){
                if(col==ini)
                    m[f][col]=1;
                if(col==fin)
                    m[f][col]=1;
                if((col!=ini)&&(col!=fin))
                    m[f][col]=m[f-1][col-1]+m[f-1][col+1];
            }
        }
        aux++;
        ini=c-aux;
        fin=c+aux;
    }    
}
int main(){
    int n,c;
    int a[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    cargar_matriz_ceros(a,n,n*2-1);
    mostrar_matriz(a,n,n*2-1);
    cout<<endl;
    generar_matriz_pascal(a,n);
    mostrar_matriz_xy(a,n,n*2-1);
    //system("clear");   
    cout<<endl; 
    return 0;
}

