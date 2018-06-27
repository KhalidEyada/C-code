#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Enter char\n");
   char ch= getchar(); // this func takes only one char and takes place of scanf
   //putchar(65); // this func understands only char and takes place of printf
   if (ch=='a')
   printf("apple");
   else if (ch == 'b')
     printf("book");
   else if (ch=='c')
     printf("car");
   else if (ch=='d')
     printf("dog");
   else if (ch=='e')
     printf("Enter");
    else
        printf("error");

    return 0;
}
