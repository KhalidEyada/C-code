#include <stdio.h>
#include <stdlib.h>

int main()
{
    //fabonacci
  int z=0;
    printf("Enter the number : ");
    scanf("%i",&z);
   int x [z];

   int i ,y;
   for ( y=0;y<2;y++)
   {
       x[y]=1;
       printf(",%i ",x[y]);
   }
   for (  i =2;i<z;i++)
   {

       x[i]=x[i-1]+x[i-2];
       printf(", %i ", x[i]);
   }
    return 0;
}
