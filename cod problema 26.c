#include<stdio.h>
#include<conio2.h>
int n,x,y,z;
 
int main()
{
    printf("numeros a imprimir... ");
    scanf("%d",&n);
    x=0;
    y=1;
    n=n-3;
    printf("%d ",x);
    printf("%d  ",y);
    for(z=0;z<=n;)
    {
                  z=x+y;
                  printf("%d  ",z);
                  x=y;
                  y=z;
                  }
    getche();
}
