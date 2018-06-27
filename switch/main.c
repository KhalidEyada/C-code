#include <stdio.h>
#include <stdlib.h>

int main()
{
char x;
printf("Enter letter \n");
scanf("%c",&x);
switch (x)
{case 'a':
  case 'A':
    printf("apple");
    break;
case 'b':
case 'B':
   printf("book");
   break;
case 'c':
    case 'C':
  printf("car");
  break;
default :
        printf("Error");}


    return 0;
}
