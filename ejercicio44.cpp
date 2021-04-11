//44) Generar y Hallar la suma de los N primereos terminos
//S= (X+0) + (X+1) + (X+1) + (X+2) + (X+3) + (X+5) + (X+8) =
#include<iostream>
using namespace std;
int main(){
    int n,c,b,d,i,j,x;
    double a,s,aux;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cout<<"Introduce la cantidad de X:";
    cin>>x;
    a=0;
    s=0;
    b=1;
    c=1;
    for(i=1;i<=n;i++){
        if(i==1){
            s=s+(x+a);
            d=d+c;
            c++;
            cout<<"("<<x<<"+"<<a<<") + "; 
        }
        if(i>=2){
            aux=a+b;
            s=s+(x+aux);
            if(i!=n)
                cout<<"("<<x<<"+"<<aux<<") + ";   
            else
                cout<<"("<<x<<"+"<<aux<<") = "; 
            b=a;
            a=aux;
        }        
    }
    cout.precision(3);
    cout<<s<<endl;
    return 0;
}