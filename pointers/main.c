#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=5;
   int *p=&i;
   printf("%u \n%u",*p,&i);
    return 0;
}
