/*76) Introduce 2 numeros enteros positivos N y K, luego hallar el menor multiplo de K
prespecto a N.
Ej.: N=7 y K=3 => menor multiplo de 3 respecto de 7 es 6.
     N=12 y K=5 => menor multiplo de 5 respecto de 12 es 10.
     Introduce la cantidad de N:12
    Introduce el valor de K:5
    El maximo valor multiplo entre N=12 y K=5 es = 10
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int maxmultiplo(int n, int k){
    int c;
    c=(int)n/k;
    return (c*k);
}
int main(){
    unsigned int n,c=0,i=0,k;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cout<<"Introduce el valor de K:";
    cin>>k;   
    cout.precision(3);    //colocamos precion en el redondeo a 3 digitos en la salida
    cout<<"El maximo valor multiplo entre N="<<n<<" y K="<<k<<" es = "<<maxmultiplo(n,k);
    cout<<endl; 
    return 0;
}