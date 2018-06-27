#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y ,z;
    printf("Enter x\n");
    scanf("%i",&x);
     printf("Enter y\n");
    scanf("%i",&y);
     z=(x>y)?x:y; // here if the condition between () is true z will have the value of x if not it will have the value of y
    printf("the max is %i",z );
    return 0;
}
