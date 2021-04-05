//Generar la siguiente serie para n terminos
//1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0,.....
#include<stdio.h>
#include<ncurses.h>
void main(){
   int i,n,c,a,e,b,aux,d;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    c=1;
    d=1;
 for(i=0;i<n;i++){
     if(d<=c)
        printf("1, ");
    if(d>c)
        printf("0, ");
    if(2*c==d){
        c++;
        d=0;
    }
    d++;
 }    
 printf("\n");
}