#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ;
    char a,b;


    scanf("%i",&x);
    printf("Enter the firest and sec litter\n");
    getchar();
    scanf("%c",&a);
    getchar();
    scanf("%c",&b);

   for ( x; x>0;x-- )
   {
       for ( y = a;y<=b;y++)
       {

           putchar(y);

       }
       printf("\n");

   }
    return 0;
}
