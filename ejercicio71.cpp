/*71) hallar la sumatoria de la siguiente serie
Ej.: (0/1!) + (1/2!) + (1/3!) + (2/4!) + (3/5!) + (5/6!) + (8/7!) = 0.784
*/
#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n){
    int c=1,i;
    for(i=1;i<=n;i++)
        c*=i;
    return c;
}
int main(){
    unsigned int n,i,a,b,c;
    float s,aux;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    s=0;
    a=0;
    b=1;
    c=0;
    for(i=1;i<=n;i++){        
        if(i==1)
            c=0;
        if(i==n)
            cout<<"("<<c<<"/"<<i<<"!) ";        
        else
            cout<<"("<<c<<"/"<<i<<"!) + ";
        aux=factorial(i);
        aux=c/aux;
        s=s+aux;
        //cout<<factorial(i)<<" fib= "<<c<<"aux="<<aux<<endl;
        c=a+b;
        b=a;
        a=c;
    }
    cout.precision(3);
    cout<<"= "<<s;
    cout<<endl; 
    return 0;
}