//36) Generar la siguiente serie para n terminos
//2, 0, 0, 3, 0, 0, 0, 5, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,.....
#include<stdio.h>
#include<ncurses.h>
void main(){
   int i,n,c,sw,e,d;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    c=1;
    d=3;
    e=2;
 for(i=0;i<n;i++){
     if(c<=d){
         if(c==1)
            printf("%d, ",e);
        else
            printf("0, ");         
     }
     c++;
     if(c==d+1){
         d++;
         c=1;
         if(e<3)
         e++;
         else
         e=e+2;
     }
 }    
 printf("\n");
}