#include <stdio.h>
#include <stdlib.h>
double min (double num1,double num2)
{
    if (num1>num2)
        return num1;
    else
        return num2;
}
int main()
{
   double num1,num2;
   printf("Enter the first number :\n");
   scanf("%d",&num1);
    printf("Enter the second number :\n");
   scanf("%d",&num2);
   printf("The biggest number is %d",min(num1,num2));

    return 0;
}
