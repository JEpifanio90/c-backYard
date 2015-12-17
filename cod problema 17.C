#include<stdio.h>
#include<conio2.h>
#include<conio.h>

float a,b,c,x,y,z;

main()

{ 
      printf("cuantas horas trabajo hoy?"); scanf("%f",&a);
      if(a>40)
      { 
               b=40*500;
               c=a-40;
               x=c*1000;
               y=(x+b)*.02;
               z=(x+b)-y;
               printf("Su sueldo es de %f pesos",z);
      }
      else
      { 
          b=a*500;
          printf("Su sueldo es de %f pesos",b);
      }
      getch();
}
               
               
               
      
