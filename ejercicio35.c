//35) Generar la siguiente serie para n terminos
//0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0,......
#include<stdio.h>
#include<ncurses.h>
void main(){
   int i,n,c,sw,e;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    c=1;
    e=3;
    sw=0;
 for(i=0;i<n;i++){
     printf("%d, ",sw);
     if(c==e){
         sw++;
         c=0;
     }
     c++;
     if(sw==2){
         sw=0;
         e++;
     }
 }    
 printf("\n");
}