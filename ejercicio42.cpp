//Generar y Hallar la suma de los N primereos terminos
//S= 0+1+3+6+10+5+8+13+....
#include<iostream>
using namespace std;
int main(){
    int n,a,c,b,s,i;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    a=0;
    s=0;
    b=1;
    c=0;
    for(i=1;i<=n;i++){
        c=c+b;
        s=s+c;
        b++;
        if(i!=n)
        cout<<c<<" + ";   
        else
        cout<<c<<" = "; 
    }
    cout<<endl<<"La suma es : "<<s<<endl;
    return 0;
}