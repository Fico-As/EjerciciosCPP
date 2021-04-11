/*62) Leer un numero real positivo R,luego intercambiar el primer 
digito de la parte entera con el ultimo digito de la parte decimal
Ej.: 
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int d,d2,c,n;
    double d1,r,r2,rest,d3;
    float r3;
    cout<<"Introduce la cantidad de R:";
    cin>>r;
    r2=r;
    n=(int)r;
    //cout<<"n="<<n<<endl;
    d=1;
    d2=0;
    while (n>10){
        d1=n-((int)n/10*10);
        n=(int)n/10;
        d2=d1*d+d2;
        d*=10;
    }
    d1=n-((int)n/10*10);
    //cout<<"d1="<<d1<<endl;
    c=1;
    r2=r2-(int)r2;
    n=(int)r2;
    //cout<<"r2="<<r2<<endl;
    //cout<<"n="<<n<<endl;
    r3=r2;
    while((r3>n)&&(c<10000)){
        r3=r3*10;
        c=c*10;
        n=(int)r3;
    }
    //cout<<"r3="<<r3<<endl;
    d3=r3-((int)r3/10*10);
    //cout<<"d3="<<d3<<endl;
    r3=(int)r3/10;
    d2=d3*d+d2;
    r3=r3*10+d1;
    rest=d2+r3/c;
    cout<<"El digitos cambiado es= "<<rest;
    cout<<endl; 
    return 0;
}