//Generar la siguiente serie para n terminos
//0, 1, 4, 9, 16, 25,....
#include<stdio.h>
#include<ncurses.h>
void main(){
   int i,n,c,j,a;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
 for(i=0;i<n;i++){
     if(i==0){
         printf("0, ");
     }
     else{
         printf("%d, ",i*i);
     }
 }    
 printf("\n");
}