#include <stdio.h>
#include <stdlib.h>
//this is a prog that sums the digits of a number meaning 123=5......1+2+3=5

int sumdigits (int x);
int main()
{
    int x ;
    scanf("%i",&x);
    printf("%i",sumdigits(x));
    return 0;
}
int sumdigits (int x)
{

    if (x==0)
        return 0;
    return x%10+sumdigits(x/10);
}
