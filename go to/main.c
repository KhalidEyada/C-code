#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=1,y=1;

   x=y+4;
   if (x==5)
   goto khaled ; // goto is used to cancel all the kines beneath it and go to label you created which here is khaled . you can use it before and after goto
   x=14;
  khaled :
       printf("%i",x);
    return 0;
}
