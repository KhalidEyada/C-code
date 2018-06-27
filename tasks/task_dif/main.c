#include <stdio.h>
#include <stdlib.h>
int dif (int ar[])
{
    int i=0,x=0,y=ar[0];
    for (i;i<4;i++)
    {

        if(x<=ar[i])
        {
            x=ar[i];
        }
      if (y>=ar[i])
        {
            y=ar[i];
        }
    }
   return x-y;
}
int main()
{
   int ar [4],i=0,x=0;
   for ( i=0;i<4;i++)
   {
       printf("Enter number :\n");
       scanf( "%i",&ar[i]);
   }
   i=0;
   system("cls");
    printf("the array is :\n");
    for (i;i<4;i++)
   {
       printf("%i \n",ar[i]);
   }
   printf("\n\nthe dif is : %i",dif(ar));

    return 0;
}
