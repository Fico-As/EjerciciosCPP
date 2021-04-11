//31) Generar la siguiente serie para n terminos
//0,1,0,0,1,1,0,0,0,1,1,1,0,0,0,0,1,1,1,....
#include<stdio.h>
#include<ncurses.h>
void main(){
   int a,b,cont,aux,d,n;   
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    a=0;
    b=1;
    cont=0;
    d=1;
    aux=1;
    while (cont<=n)
    {
        while ((d<=aux)&&(cont<=n)){
            cont++;
            d++;
            printf("%d, ",a);
        }
        d=1;
        while((d<=aux)&&(cont<=n)){
            cont++;
            d++;
            printf("%d, ",b);
        }
        d=1;
        aux++;
    }    
    printf("\n");   
    
}