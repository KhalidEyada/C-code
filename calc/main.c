#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x ,y;
    float a,b ;
    do
 {
    printf("Enter operator\n");
    x=getchar();
    printf("Enter num1\n");
    scanf("%f",&a);
    printf("Enter num2\n");
    scanf("%f",&b);

    switch (x)
    {
    case '+' :
        printf("x+y = %.2f\n",a+b);
        break;
    case '-' :
        printf("x-y = %.2f\n",a-b);
         break;
         case '*' :
        printf("x*y = %.2f\n",a*b);
         break;
         default :
        printf("x/y = %.2uf\n",a/b);
    }
    printf("Do you want to contin? y/n \n");
    getchar();// we are using this getchar to empty the buffer after the scan because it concider the enter as a character
    scanf("%c",&y);
 } while (y=='y');
 getchar();


    return 0;
}
