/*62) Dado un numero entero positivo N, contar cuantos de sus digitos son multiplos de 2, 3, 5.
Ej.: Introduce la cantidad de N:123456
Digitos multiplos de 2= 3 Multiplos de 3= 2 Multiplos de 5= 1
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,m3,d1,n1,sdg,m2,m5;
    cout<<"Introduce la cantidad de N:";
    cin>>n1;
    m2=0;
    m5=0;
    m3=0;
    while (n1>0){
            d1=n1-((int)n1/10*10);
            if(d1%2==0)
                m2++;
            if(d1%3==0)
                m3++;
            if(d1%5==0)
                m5++;
            n1=(int)n1/10;
        }
    cout<<"Digitos multiplos de (\"2\")= "<<m2<<" Multiplos de (\'3\')= "<<m3<<" Multiplos de (5)= "<<m5;
    cout<<endl; 
    return 0;
}