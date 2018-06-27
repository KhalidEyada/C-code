#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,a,c,d=1;
   for (x=1;x<=10;x++)
   {
       for (a=1;a<=(x+1);a++)
       {
           printf(" ");
       }
        printf("x");
       for (c=18;c>=d;c--)
       {
           printf(" ");
       }
        printf("x\n");
        d=d+2;
   }
    return 0;
}
