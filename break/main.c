#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=1 , y ,z=1;
   while (z<10)
   {
       x++;
       if(x==5)
        break;//here it will exit the loop when x==5 because of the break
       y=x+10;
       z++;
   }
   printf("%i %i",x,y);
    return 0;
}
