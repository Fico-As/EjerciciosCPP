/*12) Generar la serie fibonacci para ne terminos
Introdusca un valor: 7
 0,  1,  1,  2,  3,  5,  8
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,k,p,s,t,i;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    p=-1;
    s=1;
    k=n;
    for(i=0;i<k;i++){
        t=p+s;
        p=s;
        s=t;
        if(i!=k-1)
            printf(" %d, ",s);
        else
            printf(" %d\n",s);
    }
}
