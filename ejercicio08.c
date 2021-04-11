/*08) Introducir un numero entero Xpositivo mayor que 1 y no menor que 10, 
generar y sumar con dicho numero la siguiente serie: 
Ej. si X=3, entonces la suma S= 1 + 22 + 333
Introdusca un valor:5
S= 1 + 22 + 333 + 4444 + 55555 = 60355 
*/
#include<stdio.h>
#include<ncurses.h>
void main(){
    int n,i,j,s,a;
    printf("Introdusca un valor:");
    scanf("%d",&n);
    s=0;
    printf("S= ");
    for(i=1;i<=n;i++){
        a=0;
        for(j=1;j<=i;j++){
            a=a*10+i;
        }
        if(i!=n)
        printf("%d + ",a);
        else
        printf("%d ",a);
        s=s+a;
    }
printf("= %d \n",s);
}
