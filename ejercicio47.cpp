//47) Generar y Hallar la suma de los N primereos terminos
//S= 1 + ((2* ln3^1)/1!) - ((2* ln3^2)/2!) + ((2* ln3^3)/3!) - ((2* ln3^4)/4!) + ((2* ln3^5)/5!) - ((2* ln3^6)/6!) + ((2* ln3^7)/7!) - ((2* ln3^8)/8!) = 9
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,c,b,d,i,j,x,aux,a,ex;
    double s;
    cout<<"Introduce la cantidad de N y X:";
    cin>>n>>x>>a;
    ex=1;
    s=0;
    aux=1;
    for(i=1;i<=n;i++){
        if(i==1){
            s=s+1;
            cout<<"1 ";
        }
        else{
           
                if(i%2==0)
                    cout<<"+ (("<<x<<"* ln"<<a<<"^"<<ex<<")/"<<ex<<"!) "; 
                else
                    cout<<"- (("<<x<<"* ln"<<a<<"^"<<ex<<")/"<<ex<<"!) "; 
       aux=1;
       for(j=1;j<=ex;j++)
            aux=aux*j;
        s=s+((pow(x*log(a),ex))/aux);
        ex++;                     
        }
    }
    cout.precision(3);
    cout<<"= "<<s<<endl;
    return 0;
}