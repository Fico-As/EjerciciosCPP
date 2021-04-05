//Hallar el MCD y el m.c.m. de dos numeros
#include<stdio.h>
#include<ncurses.h>

void main(){
   int a,b,c,i,mcd,a1,b1;   
    printf("Introducir el valor A: ");
    scanf("%d",&a); 
    printf("Introducir el valor B: ");
    scanf("%d",&b);
    i=2;
    c=1;
    a1=a;
    b1=b;
    while ((a!=1)||(b!=1))
    {
        if((a%i==0)||(b%i==0)){
            c=c*i;
            if(a%i==0)
                a=a/i;
            if(b%i==0)
                b=b/i;
        }
        else
            i++;
    }    
    printf("El minimo comun multiplo (MCM) es:%d \n",c);
    
    i=2;
    mcd=1;
    a=a1;
    b=b1;
    printf("a:%d y B:%d\n",a,b);
    while((a!=1)||(b!=1)){
        if((a%i==0)||(b%i==0)){
            if((a%i==0)&&(b%i==0)){
                mcd=mcd*i;
            }
            if(a%i==0)
                a=a/i;
            if(b%i==0)
                b=b/i;
        }
        else{
            i++;
        }
    }
    printf("El maximo comun divisor (m.c.d.) es:%d \n",mcd);
}