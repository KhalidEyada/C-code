#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int *x;
}info;
void sd (info->cd);
int main()
{
    info s;
    s.x=5;
    sd(s.x);
    return 0;
}
void sd (info->cd)
{
    printf("%i",cd->x);
}
