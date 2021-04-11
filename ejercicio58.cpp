//58) Dado un numero N entero positivo mostrar la cantidad de digitos iguales a cero que este contiene.
//Introduce la cantidad de N:179832
//
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,par,cont,d1,n1;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    n1=n;
    cont=0;    
    while (n>0){
            d1=n-((int)n/10*10);
            if (d1==0)
                cont++;
            n=(int)n/10;
        }
            cout<<"El numero "<<n1<<" tiene "<<cont<<" digitos son CEROS. "; 
    cout<<endl; 
    return 0;
}