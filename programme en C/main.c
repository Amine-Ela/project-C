#include <stdio.h>
#include <math.h>


int main()
{
   const float pi = 3.14 ;
   float r ;
   float D ;
   float P ;
   float S ;
   printf ("donner le rayon du cercle :");
   scanf ("%f",&r);
   D=r*2;
   P=r*2*3,14;
   S=pow(r,2)*3,14;
   printf("diametre est : %f \n",D);
   printf("diametre est : %f \n",P);
   printf("diametre est : %f \n",S);
   return 0;
}
