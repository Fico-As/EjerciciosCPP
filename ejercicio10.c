/*10) Calcular S= 1!/(2^0)
para w terminos.
Ej. Introdusca un valor: 6
Serie= 1!/(2^0) - 3!/(4^1) + 5!/(6^2) - 7!/(8^3) + 9!/(10^4) - 11!/(12^5)= -131.139
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
int factorial(int n){
    int c=1,i;
    for(i=1;i<=n;i++)
        c*=i;
    return c;
}
int pow1(int val, int pot){
    int res=1;
    for(int i=1;i<=pot;i++){
        res=res*val;
    }
    return res;
}

void main(){
    int n,i,j,a;
    double pot, fact;
    float s;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    printf("Serie= ");
    a=1;
    s=0;
    for(i=1;i<=n;i++){
        a=i*2-1;
        fact=factorial(a);
        pot=(pow1(-1,i+1))*(pow1(i*2,i-1));
        //printf("\n fact=%f pot=%f\n",fact,pot);
        s=(float)s+fact/pot;
        if(i!=n){
            if(i%2==0)
                printf("%d!/(%d^%d) + ",a,i*2,i-1);
            else
                printf("%d!/(%d^%d) - ",a,i*2,i-1);
        }        
        else
        printf("%d!/(%d^%d)",a,i*2,i-1);
    }
printf("= %0.3f\n",s);
}
