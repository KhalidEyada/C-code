#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    for(i;i<4;i++)
    {
        if (i==2)
            continue;
            printf("%i\n",i);
    }
    printf("\n%i ",i);
    return 0;
}
