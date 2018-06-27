#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,x,y=1,a=1,b=1,d=20;
    printf("Enter num of lines :\n");
scanf("%i",&d);
m=(d/2);
    for (x=(d-1);x>=1;x--)
    {
        for (b=1;b<=d;b++)
        {
               printf(" ");
        }
                    for (a=1;a<=y;a++)
        {
            printf("x");
        }
        printf("\n");
       if (x<=m)
       {
          d++;
          y=y-2;
       }
       else
       {
        y=y+2;
        d--;
       }
    }
    return 0;
}
