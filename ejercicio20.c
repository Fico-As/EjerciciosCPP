/*20) Hallar la raiz cuadrada de un numero N.
Ej. 67 => 8.1
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,mi2,aux,c,j,cont,i,rest,a1,ndig,div=1;
    float s;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    cont=0;
    i=1;
    while(i*i<n){
        i++;
    }
    i=i-1;
    rest=n-(i*i);
    printf("raiz=%d\n",i);
    printf("rest=%d\n",rest);
do{
    rest=rest*100;
    mi2=i*2;
    aux=rest;
    aux=(int)aux/10;
    printf("i x 2 =%d\n",mi2);
    printf("rest=%d\n",rest);
    a1=(int)aux/mi2;
    printf("a1=%d\n",a1);
    ndig=mi2*10+a1;
    aux=ndig;
    ndig=ndig*a1;
    if(ndig>rest){
        a1--;
        ndig=mi2*10+a1;
        ndig=ndig*a1;
    }
    cont++;
    rest=rest-ndig;
    i=i*10+a1;
}while(cont<=3);
for(j=1;j<=cont;j++)
div=div*10;
s=(float)i/div;
    printf("raiz =%.4f\n",s);
}