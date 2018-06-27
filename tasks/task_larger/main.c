#include <stdio.h>
#include <stdlib.h>
void larger (int *x,int *y)
{
    int c=0;
    if (*x<*y)
    {
     c=*x;
        *x=*y;
        *y=c;

    }

}
int main()
{
    int x=0,y=0;
    printf("Enter tow numbers :\n");
    scanf("%i %i",&y,&x);

     larger(&x,&y);
    printf("%i %i",x,y);
    return 0;
}
