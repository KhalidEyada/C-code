#include <stdio.h>
#include <stdlib.h>
int factorial (int x)
{
    int z=(x-1);

    for( z ; z>0;z--)
    {
        x*=z;

    }
    return x;
}
int main()
{
   int x;
   printf("Enter num : \n");
   scanf("%i",&x);
  printf("%i", factorial(x));
    return 0;
}
