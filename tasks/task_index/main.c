#include <stdio.h>
#include <stdlib.h>
int larger_index (int ar[])
{
    int i=0,x=0,y=0;
    for (i;i<4;i++)
    {
        if(x<=ar[i])
        {
            x=ar[i];
            y=i;
        }
    }

   return y;
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
   printf("\n\nthe index is : %i",larger_index(ar));

    return 0;
}
