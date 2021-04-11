//41) Generar y sumar para N terminos
//S= 0+1+1+2+3+5+8+13+....
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
        if(i<=1){
            s=0;
            cout<<s<<" + ";
        }
        else{
            c=a+b;
            s=s+c;
            cout<<c<<" + ";
            b=a;
            a=c;
        }
    }
    cout<<endl<<"La suma es : "<<s<<endl;
}