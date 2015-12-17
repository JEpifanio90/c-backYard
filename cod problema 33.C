#include<stdio.h>
#include<conio2.h>
#include<time.h>
#include<stdlib.h>

int i, num,x,y,fondo,frente;

main()
{
      srand(time(NULL));
      clrscr();
       for(i=1;i>20;i++)
      {
      num = 1+rand()%100; 
      x=1+rand()%80;
      y=1+rand()%24; 
      fondo=rand()%15;
      frente=rand()%15;
      textcolor(fondo);
      textbackground(frente);      
      gotoxy(x,y); cprintf("%d...",num );
       }
       getche();
}
      
