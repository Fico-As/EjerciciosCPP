/*17) Introducir un numero N entero positivo, luego mostrar el siguiente triangulo 
numerico para N filas
Introdusca un valor: 5
 1  3  5  7  9 
 1  3  5  7 
 1  3  5 
 1  3 
 1 
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,val,aux,c,j,cont,i;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            printf(" %d ",j*2-1);
        }
        printf("\n");
    }

}