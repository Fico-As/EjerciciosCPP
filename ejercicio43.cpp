//Generar y Hallar la suma de los N primereos terminos
//S= 1! + 4! + 14! + 58! = 
#include<iostream>
using namespace std;
int main(){
    int n,c,b,d,i,j;
    double a,s,aux;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    a=1;
    s=0;
    d=0;
    c=1;
    for(i=1;i<=n;i++){
        if(i==1){
            s=s+c;
            d=d+c;
            c++;
            cout<<d<<"! + "; 
        }
        else{
            aux=d*c+2;
            c++;
            d=aux;
            a=1;
            for(j=1;j<=aux;j++)
                a=a*j;
            s=s+a;
            if(i!=n)
        cout<<aux<<"! + ";   
        else
        cout<<aux<<"! = "; 
        }        
    }
    cout.precision(3);
    cout<<endl<<"La suma es : "<<s<<endl;
    return 0;
}