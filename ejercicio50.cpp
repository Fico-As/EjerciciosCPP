//Generar y Hallar la suma de los N primereos terminos
//S= (0/(3+2)) + (1/(3+3)) + (1/(3+4)) + (2/(3+5)) + (3/(3+6)) + (5/(3+7)) = 1.393
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,c,b,d,i,j,x,aux;
    double a,s,e;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cout<<"Introduce la cantidad de X:";
    cin>>x;
    a=0;
    e=2;
    s=0;
    b=1;
    //d=2;
    c=a;
    //aux=0;
    for(i=1;i<=n;i++){
        if(i==1){
            s=s+(a/(x+e));
            if(n==1)
            cout<<"("<<a<<"/("<<x<<"+"<<e<<")) = ";
            else
            cout<<"("<<a<<"/("<<x<<"+"<<e<<")) + ";
        }
        else{
            c=a+b;
            if(i!=n){
                cout<<"("<<c<<"/("<<x<<"+"<<e<<")) + ";
            }        
            else
            cout<<"("<<c<<"/("<<x<<"+"<<e<<")) = "; 
            s=s+(c/(x+e));          
            b=a;
            a=c;
       }
       e++;
    }
    cout.precision(4);
    cout<<s<<endl;
    return 0;
}