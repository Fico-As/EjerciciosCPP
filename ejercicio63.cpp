/*63) Introducir un numero entero positivo N, con los digitos diferentes entre si, se pide
determinar el menor digito que este contiene y la posicion que este ocupa.
Contando de derecha a Izquierda
Ej.: Introduce la cantidad de N:1234567
El digitos mayor es= 7 La posicion es= 7
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,d1,n1,may,pos;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    n1=n;
    may=0;
    pos=0;
    while (n>0){
        d1=n-((int)n/10*10);
        if(d1>may)
            may=d1;
        n=(int)n/10;
        pos++;
    }
    pos++;
    while(n1>0){
        d1=n1-((int)n1/10*10);
        n1=(int)n1/10;
        if(d1==may)
            n1=0;
        pos--;
    }
    cout<<"El digitos mayor es= "<<may<<" La posicion es= "<<pos;
    cout<<endl; 
    return 0;
}