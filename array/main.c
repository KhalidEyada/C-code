#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x [5];
   int i=0;
   for (i=0;i<5;i++)
   {
       printf("Enter number :");
       scanf("%i",&x[i]);
   }
   int y ;
   int z =x[0];

   for (y=0;y<5; y++)
   {
  z=(z>x[y])? z:x[y];
   //if (x[y]>z)
    //z=x[y];
   }
   printf("the biggest is : %i",z);
    return 0;
}
