/*96) Generar la siguiente Matriz 
Ej.:  Introduce la dimencion de la matriz: 5
   1   6   10  13  15
   0   2   7   11  14
   0   0   3   8   12
   0   0   0   4   9
   0   0   0   0   5

*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void mostrar_matriz(int m[20][20],int n){
    int f,c;
    for(int f=1;f<=n;f++){
        for(c=1;c<=n;c++){
            //cout<<gotoxy1(f+2,c*4)<<m[f][c];
            cout<<"   "<<m[f][c];
        }
        cout<<endl;
    }
}
int main(){
    int n,c,d;
    int a[20][20];
    int b[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(c=1;c<=n;c++){
            a[i][c]=rand()%10;
        }        
    }
    for(int i=1;i<=n;i++){
        for(c=1;c<=n;c++){
            b[i][c]=rand()%10;
        }        
    }
system("clear");  
cout<<"La Matriz A"<<endl;     
mostrar_matriz(a,n);
cout<<"La Matriz B"<<endl; 
mostrar_matriz(b,n);
//system("clear");   
cout<<endl; 
return 0;
}

