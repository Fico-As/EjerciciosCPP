/*101) Generar la siguiente Matriz cubo magico
Ej.:  Introduce la dimencion de la matriz: 4
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
void generar_matriz(int m[20][20],int n, int n1){
    int d,f,c,a;
    d=1;
    for(c=1;c<=3;c++){
        a=c;
        d=c*2-1;
        for(f=1;f<=n;f++){
            m[f][a]=d;
            a++;
            d=d+7;
        }
    }
}
int main(){
    int n,c,d;
    int a[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    cargar_matriz_ceros(a,n,n+2);
    mostrar_matriz(a,n,n+2);
    cout<<endl;
    generar_matriz(a,n,n+2);
    mostrar_matriz_xy(a,n,n+2);
    //system("clear");   
    cout<<endl; 
    return 0;
}

