/*83) Dado un numero entero positivo mostrar los digitos centrales que este numero tenga
Ej.: Introduce la cantidad de N:12345 => mostrar 3
    Introduce la cantidad de N:123456 => mostrar 34
    Introduce la cantidad de N:12343
    El numero central de: 12343 es este valor: 3
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int digCentral1(int n){
    int aux, c, med,pot;
    aux=n;
    c=0;
    while(n>0){
        n=(int)n/10;
        c++;
    }
    if(c%2==0){
        med=c/2-1;
        aux=(int)aux/pow(10,med);
        med=aux%100;
    }
    else{
        med=(int)c/2;
        aux=(int)aux/pow(10,med);
        med=aux%10;
    }
    return med;
}
int main(){
    int n,c,a,i,k,d1,d2,b;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cout<<"El numero central de: "<<n<<" es este valor: "<<digCentral1(n);   
    cout<<endl; 
    return 0;
}