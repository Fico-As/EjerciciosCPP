/*96) Generar la siguiente Matriz 
Ej.:  Introduce la dimencion de la matriz: 4
1  1  1  1  
1  2  2  2  
1  2  2  2  
1  1  1  1  
Introduce la dimencion de la matriz: 5
1  1  1  1  1  
1  2  2  2  2  
1  2  3  3  3  
1  2  2  2  2  
1  1  1  1  1 
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int main(){
    int n,x,c,d,a,m1;
    int m[20][20];
    cout<<"Introduce la dimencion de la matriz: ";
    cin>>n;
    x=(int)((n+1)/2);
    d=1;
    m1=n;
    for(int i=1;i<=x;i++){
        for(c=i;c<=n;c++){
            m[i][c]=d;
            m[m1][c]=d;
        }
        for(a=i+1;a<=n-i;a++){
            m[a][i]=d;
        }
        d++;
        m1--;
    }
    for(int f=1;f<=n;f++){
        for(c=1;c<=n;c++){
            cout<<m[f][c]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl; 
    return 0;
}

