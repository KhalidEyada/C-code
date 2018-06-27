#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y ;
    printf("Enter first  number \n");
    scanf("%i",&x);
    printf("Enter second number \n");
    scanf("%i",&y);
    if (x>y)
        printf("maximum is %i\n",x);
    else
        printf("maximum is %i\n",y);
    return 0;
}
