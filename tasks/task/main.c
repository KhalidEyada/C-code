#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int y=1;
    int z=1;
    int a,b=1,c;
    for (a=1;a<=5;a++)
    {
        for (b=1;b<=a;b++)
        {
            printf("%i",a);
        }
         printf("\n");
    }
    printf("Enter number of lines\n");
    scanf("%i",&x);
   while (y<=x)
    {
        while (z<=y)
        {
         printf("%i",y);
          z++;
        }
    printf("\n");
    y++;
    z=1;
    }
    return 0;
}
