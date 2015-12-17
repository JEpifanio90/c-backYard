#include<stdio.h>
#include<conio.h>
#include<conio2.h>

float a;

main()

{
      printf("bienvenido al restaurante el rudo\n");
     
      printf(" (1) tacos \n (2) enchiladas \n (3) flautas \n (4) hamburgesas \n (5) gorditas");
       printf("\n que quiere de comer?"); scanf("%f",&a);
       if(a==1)
               printf("una orden de tacos y un refresco por $50");
       else
          { if(a==2)
                    printf("una orden de enchiladas y agua por $30");
                    else
                    {     if(a==3)
                          printf("una orden de flautas y un refresco por $30");
                            else
                               {    if(a==4)
                                     printf("una hamburguesa y una malteada por $60");
                                        else
                                            {  if(a==5)
                                                  printf("una orden de gorditas y un refresco por $20");
                                                   else
                                                     printf("vuelva a checar el menu");
                                                     }
                               }
                    }
          }
          getch();
}    
    
      
   
