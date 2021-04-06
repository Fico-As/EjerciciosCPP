//Generar y Hallar la suma de los N primereos terminos
//S= (sen(1*3)^1)/(1*3^1)) + (sen(2*3)^2)/(3*3^3)) + (sen(3*3)^3)/(5*3^5)) + (sen(4*3)^4)/(7*3^7)) = 0.04807
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,c,b,d,i,j,x,aux;
    double a,s;
    cout<<"Introduce la cantidad de N y X:";
    cin>>n>>x;
    //a=1;
    s=0;
    //b=1;
    d=1;
    c=1;
    for(i=1;i<=n;i++){
        s=s+(pow(sin(c*x),c)/(d*pow(x,d)));
        if(i!=n)           
            cout<<"(sen("<<c<<"*"<<x<<")^"<<c<<")/("<<d<<"*"<<x<<"^"<<d<<")) + ";
        else
            cout<<"(sen("<<c<<"*"<<x<<")^"<<c<<")/("<<d<<"*"<<x<<"^"<<d<<")) = ";           
        c++;
        d+=2;
    }
    cout.precision(4);
    cout<<s<<endl;
    return 0;
}