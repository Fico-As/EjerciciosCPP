//Generar la siguiente serie para n terminos
//1,2,3,5,7,11,13,17,19,23,29,31....
#include<stdio.h>
#include<ncurses.h>
void main(){
   int i,n,c,j,a;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    i=1;
    a=1;
    c=0;
    while(i<=n){
        for(j=1;j<=a;j++){
            if(a%j==0)
            c++;
        }
        if(c<=2){
            printf("%d,  ",a);
            i++;
        }
        a++;
        c=0;
    }
    printf("\n");  
    
}