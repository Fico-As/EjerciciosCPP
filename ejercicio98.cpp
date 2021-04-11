/*96) Generar la siguiente Matriz 
Ej.:  Introduce la dimencion de la matriz: 5
   1   6   10  13  15
   0   2   7   11  14
   0   0   3   8   12
   0   0   0   4   9
   0   0   0   0   5

*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int main(){
    int n,b,c,d,a;
    int m[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    d=1;
    a=1;
    for(int i=1;i<=n;i++){
        for(c=1;c<=n;c++){
            m[i][c]=0;
        }        
    }
    for(int i=1;i<=n;i++){
        a=i;
        for(c=1;c<=n-i+1;c++){
            m[c][a]=d;
            d++;
            a++;
        }        
    }
    system("clear");
    for(int f=1;f<=n;f++){
        for(c=1;c<=n;c++){
            cout<<gotoxy1(f+2,c*4)<<m[f][c];
        }
        cout<<endl;
    }
    cout<<endl; 
    return 0;
}

