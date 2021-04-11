/*85)   Realice una fincion que convierte  un valor X, a su equivalente en base B; utilizando la 
        funcion anterior mostrar una tabla de los equivalentes de los numeros decimales en el 
        rango de 1 a N, con todos los sistemas
        numericos.
Ej.:  Introduce la cantidad de Base:9
Introduce la cantidad de Numeros:20
El numero: 1 en base 9 es= 1
El numero: 2 en base 9 es= 2
El numero: 3 en base 9 es= 3
El numero: 4 en base 9 es= 4
El numero: 5 en base 9 es= 5
El numero: 6 en base 9 es= 6
El numero: 7 en base 9 es= 7
El numero: 8 en base 9 es= 8
El numero: 9 en base 9 es= 10  
.......
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int convierteDecimalaBaseX(int x,int b){
    int a, c, n,res;
    n=0;
    c=1;
    while(x>0){
        //dig=n-((int)n/10*10);
        res=(int)x%b;
        x=(int)x/b;
        n=res*c+n;
        c*=10;
    }
    return n;
}
int main(){
    int n,c,i,j;
    cout<<"Introduce la cantidad de Base:";
    cin>>n;
    cout<<"Introduce la cantidad de Numeros:";
    cin>>c;
//    for(i=1;i<=c;i++){
        for(j=1;j<=c;j++)
            cout<<"El numero: "<<j<<" en base "<<n<<" es= "<<convierteDecimalaBaseX(j,n)<<endl;
  //  }
       
    cout<<endl; 
    return 0;
}