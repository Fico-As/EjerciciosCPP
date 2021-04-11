/*101) Generar la siguiente Matriz caracol
Ej.:  Introduce la dimencion de la matriz: 5
    1   3   5   0   0   0
    0   8   10  12  0   0
    0   0   15  17  19  0
    0   0   0   22  24  26
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void generar_matriz_caracol(int m[20][20],int n, int n1){
    int d,f,c,a,b;
    int tope, cont;
    tope=0;
    cont=1;
    while(cont<=n*n1){
        tope++;
        // llena las primeras filas
        for(c=tope;c<=n1+1-tope;c++){
            m[tope][c]=cont;
            cont++;
        }
        //llena la ultima columna
        for(f=tope+1;f<=n-tope+1;f++){
            m[f][n1-tope+1]=cont;
            cont++;
        }
        //llena la ultima fila
        for(c=n1-tope;tope<=c;c--){
            m[n+1-tope][c]=cont;
            cont++;
        }
        //llena la primera fila
        for(f=n-tope;tope<f;f--){
            m[f][tope]=cont;
            cont++;
        }
    }
    
}
int main(){
    int n,c,d;
    int a[20][20];
    cout<<"Introduce la dimencion de la matriz fila columna: ";
    cin>>n>>c;
    cargar_matriz_ceros(a,n,c);
    mostrar_matriz(a,n,c);
    cout<<endl;
    generar_matriz_caracol(a,n,c);
    mostrar_matriz_xy(a,n,c);
    //system("clear");   
    cout<<endl; 
    return 0;
}

