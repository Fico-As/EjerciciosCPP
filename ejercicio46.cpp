//46) Generar y Hallar la suma de los N primereos terminos
//S= (1*X/2) - (2*X/3) + (3*X/5) - (4*X/7) + (5*X/11) - (6*X/13) = -0.435
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,c,b,d,i,j,x,aux;
    double a,s;
    cout<<"Introduce la cantidad de N y X:";
    cin>>n>>x;
    a=1;
    s=0;
    b=1;
    d=2;
    c=2;
    for(i=1;i<=n;i++){
        s=s+(pow(-1,(i+1))*(a*x/c));
        if(i!=n){
            if(i%2==0)
                cout<<"("<<a<<"*"<<x<<"/"<<c<<") + "; 
            else
                cout<<"("<<a<<"*"<<x<<"/"<<c<<") - "; 
        }              
        else{
                cout<<"("<<a<<"*"<<x<<"/"<<c<<") = "; 
        }
            while (b==1){
                d++;
                aux=0;
                for(j=1;j<=d;j++)
                {
                    if(d%j==0)
                    aux++;
                }
                if(aux<=2){
                    b=0;
                }
            }
            b=1;
            c=d;        
            a++;
    }
    cout.precision(3);
    cout<<s<<endl;
    return 0;
}