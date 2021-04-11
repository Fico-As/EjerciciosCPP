//55) Dado un numero natural n mostrar por pantalla su digito minimo y maximo.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,max,min,dig,n2;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    max=0;
    min=9;
    while (n>0)
    {
        dig=n-((int)n/10*10);
        cout<<dig<<endl;
        if(max<dig)
            max=dig;
        if(min>dig)
            min=dig;
        n=(int)n/10;
    }    
    cout<<"El valor maximo es:"<<max<<" el minimo es:"<<min<<endl;
    return 0;
}