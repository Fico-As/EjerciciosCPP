//59)dado un numero entero paotivio N se desea hallar la suma de lso factoriales de los 
//digitos del numero: N=451 --> 4!+5!+1!=
//1! + 5! + 4! + El factorial de los digitos de 451 es: 145
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,fact,s,d1,n1,i;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    s=0;
    n1=n;
    while (n>0){
            d1=n-((int)n/10*10);
            fact=1;
            cout<<d1<<"! + ";
            for(i=1;i<=d1;i++)
                fact*=i;
            s=s+fact;
            n=(int)n/10;
        }
            cout<<"El factorial de los digitos de "<<n1<<" es: "<<s; 
    cout<<endl; 
    return 0;
}