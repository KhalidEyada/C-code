#include <stdio.h>
#include <stdlib.h>

int main()
{
   char x=0x4f;
   printf("%0x\n",x);
   char y=(x<<2);
   printf("%0x",y);
    return 0;
}
