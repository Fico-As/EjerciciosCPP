/*61) Dado un numero entero positivo N, se pide 
a)cuantos de sus digitos son pares
b)cuantos de sus digitos son multiplos de tres
c)La suma de todos los digitos 
Ej.: Introduce la cantidad de N:2345564
Digitos pares: 4 Multiplos de 3: 2 Suma de digitos: 29
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,par,m3,d1,n1,sdg;
    cout<<"Introduce la cantidad de N:";
    cin>>n1;
    par=0;
    m3=0;
    sdg=0;
    while (n1>0){
            d1=n1-((int)n1/10*10);
            if(d1%2==0)
                par++;
            if(d1%3==0)
                m3++;
            sdg=sdg+d1;
            n1=(int)n1/10;
        }
    cout<<"Digitos pares: "<<par<<" Multiplos de 3: "<<m3<<" Suma de digitos: "<<sdg;
    cout<<endl; 
    return 0;
}