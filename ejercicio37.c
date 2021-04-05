//Generar la siguiente serie para n terminos
//0, 1, 1, 2, 4, 7, 13, 24,.....
#include<stdio.h>
#include<ncurses.h>
void main(){
   int i,n,c,a,e,b,aux;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    a=0;
    b=1;
    c=1;
 for(i=0;i<n;i++){
     if(i==1)
        printf("%d, ",a);
    if(i==2)
        printf("%d, ",b);
    if(i==3)
        printf("%d, ",c);
    if(i>3){
        aux=a+b+c;
        a=b;
        b=c;
        c=aux;
        printf("%d, ",aux);
    }
 }    
 printf("\n");
}