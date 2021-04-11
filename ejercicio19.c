/*19) Introducir un numero N entero positivo, luego mostrar el siguiente triangulo 
numerico para N filas
Introdusca un valor: 4
 1  2  3  4 
 4  3  2  1 
 2  4  6 
 6  4  2 
 3  6 
 6  3 
 4 
 4
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
            printf(" %d ",j*i);
        }
        printf("\n");
        for(j=n-i+1;1<=j;j--){
            printf(" %d ",j*i);
        }
        printf("\n");
    }
}