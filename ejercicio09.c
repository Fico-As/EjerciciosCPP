/*09) Introducir un numero entero K y generar la siguiente serie 1, 3, 6, 10, 15, 21, 28,... 
Ej. si K=5, entonces la serie es 1, 3, 6, 10, 15
Introdusca un valor:9
Serie= 1, 3, 6, 10, 15, 21, 28, 36, 45
*/
#include<stdio.h>
#include<ncurses.h>
void main(){
    int n,i,j,s,a;
    printf("Introdusca un valor:");
    scanf("%d",&n);
    printf("Serie= ");
    a=1;
    s=2;
    for(i=1;i<=n;i++){
        if(i!=n)
        printf("%d, ",a);
        else
        printf("%d ",a);
        a=a+s;
        s=s+1;
    }
printf("\n");
}
