/*96) Generar la siguiente Matriz 
Ej.:  Introduce la dimencion de la matriz: 5
0       1       1       2       3
5       8       13      21      34
55      89      144     233     377
610     987     1597    2584    4181
6765    10946   17711   28657   46368

*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int main(){
    int n,b,c,d,a,m1;
    int m[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    b=-1;
    a=1;
    for(int i=1;i<=n;i++){
        for(c=1;c<=n;c++){
            d=a+b;
            m[i][c]=d;
            b=a;
            a=d;
        }        
    }
    system("clear");
    for(int f=1;f<=n;f++){
        for(c=1;c<=n;c++){
            cout<<gotoxy1(f*2,c*8)<<m[f][c];
        }
        cout<<endl;
    }
    cout<<endl; 
    return 0;
}

