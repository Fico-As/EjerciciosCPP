//49) Generar y Hallar la suma de los N primereos terminos
//S= (2/3) - (3/5) + (5/7) - (7/11) + (11/13) - (13/17) = 0.226
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,c,b,d,i,j,x,aux;
    double a,s,e;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    //a=1;
    s=0;
    //b=1;
    d=2;
    c=2;
    aux=0;
    for(i=1;i<=n;i++){
        while(aux==0){
            c++;
            a=0;
            for(j=1;j<=c;j++){
                if(c%j==0)
                a++;
            }
                if(a<=2){
                    aux=1;
                    e=c;
                }            
        }        
        if(i!=n){
            if (i%2==0)
                cout<<"("<<d<<"/"<<e<<") + ";
            else
                cout<<"("<<d<<"/"<<e<<") - ";
        }        
        else
            cout<<"("<<d<<"/"<<e<<") = "; 
        s=s+(pow(-1,i+1)*(d/e));          
       d=e;
       aux=0;
    }
    cout.precision(4);
    cout<<s<<endl;
    return 0;
}