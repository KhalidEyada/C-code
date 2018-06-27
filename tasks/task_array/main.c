#include <stdio.h>
#include <stdlib.h>
void sum_ar (float x[],float y[],int size)
{
int i=0;
printf("the sum is :\n");
for (i;i<size; i++)
{
   printf("%.1f\n",x[i]+y[i]);
}

}
int main()
{
    int a;
    printf("Enter the size of the arrays : \n");
    scanf("%i",&a);
    float x[a],y[a];
    printf("Enter the first array :\n");
    int i,z;
    for(i=0;i<a;i++)
    {
        scanf("%f",&x[i]);
    }
     printf("Enter the second array :\n");
    for(z=0;z<a;z++)
    {
        scanf("%f",&y[z]);
    }
   sum_ar(x,y,a);
    return 0;
}
