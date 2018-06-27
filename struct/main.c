#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int x;
    float y;
} fraction;
void print (fraction f)
{
    printf("%i / %.2f",f.x,f.y);
}
int main()
{
    fraction ar []={};
    int i=0,x=0;
    for (i;i<5;i++)
    {
        printf("Enter number \n");
        scanf("%i",ar.x[i]);
    }
    for (x;x<5;x++)
    {
        printf("%i / %.1f",ar.x[x],ar.y[x]);
    }
    fraction f1;
    f1.x=1;
    f1.y =2;
    print(f1);
    return 0;
}
