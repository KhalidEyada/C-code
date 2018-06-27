#include <stdio.h>
#include <stdlib.h>
float power (float x , float y)
{
    int i =1;
   float z=x;
    for (i;i<y;i++)
    {

        z*=x;
        //printf("%f \n",z);
    }
    return z;
}
int main()
{
   float x,y;
   printf("Enter base : \n");
   scanf("%f",&x);
   printf("Enter power : ");
   scanf("%f",&y);
   power(x,y );
   printf("the power is : %.2f",power(x,y ));
    return 0;
}
