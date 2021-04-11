/*84) Dado un numero N entero positivo se pide eliminar todos los digitos pares que contenga
Ej.:    Introduce la cantidad de N:1234
        El numero: 1234 eliminando digitos pares queda: 13
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int eliminaPar(int n){
    int a, c, dig,pot;
    a=0;
    c=1;
    while(n>0){
        //dig=n-((int)n/10*10);
        dig=(int)n%10;
        n=(int)n/10;
        if(dig%2!=0){
            a=dig*c+a;
            c*=10;
        }
    }
    return a;
}
int main(){
    int n,c,a,i,k,d1,d2,b;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cout<<"El numero: "<<n<<" eliminando digitos pares queda: "<<eliminaPar(n);   
    cout<<endl; 
    return 0;
}