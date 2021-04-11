//Mostrar lo digitos de un nu,ero comenzando por la derecha
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,d2,d1,dig,n1;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    n1=n;    
    while (n>0){
        d2=0;
        dig=1;
        while (n1>=10)
        {
            d1=n1-((int)n1/10*10);
            d2=d2+dig*d1;
            dig*=10;
            n1=(int)n1/10;
        }
        if(n>10)
            cout<<n1<<", "; 
        else
            cout<<n1<<" "; 
        n1=d2;
        //n1=n;
        n=n/10;
    }   
    cout<<endl; 
    return 0;
}