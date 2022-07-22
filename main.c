                                                // question 002

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416;

int main(void)
{
    double n,a, result ;


    printf("Enter the value of of N> ");
    scanf("%lf",&n);
    a = (2*n + 1.00/3.00) * PI;
    result = pow(n,n) * exp(-n) * sqrt(a);

     //

    printf("%f",result);

    return 0;
}


                                            // question 003


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int departure_time, distance, speed, arrival_time;
    printf("enter departure_time");
    scanf("%d", &departure_time);

    printf("enter distance");
    scanf("%d", &distance);

    printf("enter speed");
    scanf("%d", &speed);

    arrival_time = departure_time +((distance/speed)*100)

    if (arrival_time >2400)
    {
        arrival_time = arrival_time - 2400;
    }
    printf("arrival time : %d", arrival_time);
   return 0;
}





                                                // question 004



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int wind_speed;
    printf("wind speed ");
    scanf("%d",&wind_speed);

    if(wind_speed <25)
    {
        printf("not strong");
    }
    else if ( wind_speed>=25 && wind_speed <= 38)
    {
        printf(" strong ");
    }
    else if ( wind_speed >=39 && wind_speed <=54 )
    {
        printf("gale");
    }
    else if (wind_speed >=55 && wind_speed <=72)
    {
        printf("whole gale");
    }
    else
    {
        printf("hurrican");
    }


   return 0;
}

                                       // question 005


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int watts, lumens;
  printf("watts> ");
  scanf("%d",&watts);


  switch (watts)
  {
  case 15:
        lumens = 125;
        printf("brightness %d",lumens);
        break;
   case 25:
        lumens = 225;
        printf("brightness %d",lumens);
        break;

   case 40:
        lumens = 500;
        printf("brightness %d",lumens);
        break;

   case 60:
        lumens = 800;
        printf("brightness %d",lumens);
        break;

   case 75:
        lumens = 1000;
        printf("brightness %d",lumens);
        break;

    case 100:
        lumens = 1675;
        printf("brightness %d",lumens);
        break;


    default :
        printf("error");
  }
   return 0;
}


                                                //question 006

#include <stdio.h>
#include <stdlib.h>
# define student_discount  0.2
# define TAX 0.05

int main(void)
{


    double total_buying, commission_total,discount_buying,total_TAX,altimate_total;
    char student;


    printf("If a student put Y, else N : ");
    scanf("%c",&student);

    printf("Enter  Total purchase> ");
    scanf("%lf",&total_buying);

     if(student == 'y')
     {
         discount_buying = (total_buying * student_discount) ;

         commission_total = total_buying - (total_buying * student_discount);

         total_TAX = commission_total * TAX;

             altimate_total = total_TAX + commission_total;

             printf("total_buying %.2lf \n",total_buying);

             printf("Discounted total %.2lf \n",discount_buying);

             printf("Discounted Total %.2lf  \n",commission_total);

             printf("Total TAX %.2lf  \n",total_TAX);

             printf("Grand Total %.2lf  \n",altimate_total);

     }

        else if (student == 'n')
        {

        total_TAX = total_buying * TAX;
        altimate_total = total_buying + total_TAX;


        printf("Total Purchase %.2lf \n",total_buying);
        printf("sales Tax %.2lf \n",total_TAX);
        printf("Grand Total %.2lf \n",altimate_total);

        }

    return 0;
}












