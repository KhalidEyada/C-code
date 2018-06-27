#include <stdio.h>
#include <stdlib.h>
void arr (int i [],int size);
int main()
{
    int x;
    printf("Enter size :\n");
    scanf("%i",&x);
   int i[x];
   int a=0,b=0;
for(a;a<x;a++)
{
    printf("%i\n",i[a]);
}
   arr(i,x);
   for(b;b<x;b++)
{
    printf("\n%i",i[b]);
}
    return 0;
}

void arr (int i [],int size)
{
    int x=0;
    for(x;x<size;x++)
    {
        printf("\nEnter number :\n");
        scanf("%i",&i[x]);

    }

}
