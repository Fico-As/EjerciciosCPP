//45) Generar y Hallar la suma de los N primereos terminos
//S= (1*2) - (3*4) + (5*6) - (7*8) + (9*10) - (11*12) = -78
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,c,b,d,i,j,x;
    double a,s,aux;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    a=0;
    s=0;
    //b=1;
    d=2;
    c=1;
    for(i=1;i<=n;i++){
        //a=pow(-1,(i+1);
        //cout<<i<<"="<<a<<endl;
        s=s+(pow(-1,(i+1))*(c*d));
        if(i!=n){
            if(i%2==0)
                cout<<"("<<c<<"*"<<d<<") + "; 
            else
                cout<<"("<<c<<"*"<<d<<") - ";
        }              
        else{
                cout<<"("<<c<<"*"<<d<<") = ";
        }
            c+=2;
            d+=2;        
    }
    cout.precision(3);
    cout<<s<<endl;
    return 0;
}