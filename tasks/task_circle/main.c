#include <stdio.h>
#include <stdlib.h>
const float PI = 3.14;
typedef struct
{

 float rad;


}circle;
float area (float x);
int main()
{
circle c;
printf("Enter radious\n");
scanf("%f",&c.rad);
printf("%f",area(c.rad));
    return 0;
}
float area (float x)
{

    return PI*(x*x);
}
