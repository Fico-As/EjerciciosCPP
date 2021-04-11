//27) Mostrar el dia siguiente 
#include<stdio.h>
#include<ncurses.h>

void main(){
   int a,d,m;   
    printf("Introducir el AÑO: ");
    scanf("%d",&a); 
    printf("Introducir el MES: ");
    scanf("%d",&m);
    printf("Introducir el DIA: ");
    scanf("%d",&d);
    d++;
    if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10) && (d==32))  {
        m++;
        d=1;
    }
    if((m==4 || m==6 || m==9 || m==11)&&(d==31)){
        m++;
        d=1;
    }
    if(m==2){
        if((d==29)&& (a%4!=0)){
            m++;
            d=1;
        }
        if((d==30)&&(a%4==0)){
            d=1;
            m++;
        }
    }
    if((m==12)&&(d==32)){
        m=1;
        a++;
        d=1;
    }
    printf("El AÑO:%d, MES:%d, DIA:%d \n",a,m,d);
}