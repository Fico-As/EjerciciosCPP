/*18) Introducir un numero N entero positivo, luego mostrar el siguiente triangulo 
numerico para N filas
Introdusca un valor: 5
 1 
 2  4 
 3  6  9 
 4  8  12  16 
 5  10  15  20  25
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,val,aux,c,j,cont,i;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" %d ",j*i);
        }
        printf("\n");
    }

}