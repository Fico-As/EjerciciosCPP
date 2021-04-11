//34) Generar la siguiente serie para n terminos
//0, 1, 2, 0, 1, 2, 3, 0,....
#include<stdio.h>
#include<ncurses.h>
void main(){
   int i,n,c,d,a;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    c=3;
    d=0;
 for(i=0;i<n;i++){
     if(d<c){
         printf("%d, ",d);
         d++;
     }
     if(d==c){
         d=0;
         c++;
     }
 }    
 printf("\n");
}